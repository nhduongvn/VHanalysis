void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Tue Aug 22 09:21:54 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-389.1547,1.133333,3502.392);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,2964.988);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,2920.532);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,1649.956);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,945.9518);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,475.4504);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,226.3541);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,95.70151);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,38.57028);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,19.63959);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,10.54229);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,5.974219);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,5.456415);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,2.04815);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.9311764);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,1.528155);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.9656334);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.8215297);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1.139609);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.1260414);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.08900674);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.02187584);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,22.26426);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,21.85751);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,16.43411);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,12.59342);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,9.12638);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,6.157959);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,4.026383);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,2.422832);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,1.82681);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.257711);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.967644);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.9343688);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.5610895);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.220692);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.5176633);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.3702755);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.3280381);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.5682705);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.06842847);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.04653028);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.02187584);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(142925);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
