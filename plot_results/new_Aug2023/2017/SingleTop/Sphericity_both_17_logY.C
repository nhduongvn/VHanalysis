void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Tue Aug 22 09:18:46 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-2.241986,1.133333,3.003141);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,156.3833);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,158.8838);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,122.1638);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,88.77512);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,68.34692);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,54.31152);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,48.88575);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,41.6823);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,34.39167);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,28.65775);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,23.00522);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,22.2684);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,16.08691);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,16.34697);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,12.411);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,9.89253);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,8.196117);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,4.670476);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,2.142154);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,2.228522);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.03833158);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.2832007);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.05752587);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,5.179159);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,5.135454);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,4.618646);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,3.91903);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,3.443202);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,2.953266);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,3.001767);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,2.820708);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,2.524334);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.236486);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,1.994889);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,2.098528);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,1.725757);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.745393);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.534655);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.378132);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,1.294869);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.863173);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.5699495);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.6646665);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.03833158);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.2832007);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.05752587);
   VbbHcc_both_Sphericity_stack_2->SetEntries(12402);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
