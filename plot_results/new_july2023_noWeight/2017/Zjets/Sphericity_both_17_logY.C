void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:33:05 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-2.029467,1.133333,3.470677);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,411.8512);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,439.6566);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,295.4967);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,258.6363);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,176.607);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,154.2149);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,136.1186);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,105.0951);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,95.9924);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,78.1326);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,55.74964);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,52.54628);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,48.49744);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,46.66972);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,33.33953);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,22.22722);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,22.67415);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,10.09437);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,7.322828);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,3.108533);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,0.9477646);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,0.1083014);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(23,0.06630981);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,13.08496);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,14.87485);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,10.22581);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,10.78692);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,7.558925);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,8.165773);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,7.970128);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,7.433751);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,6.420834);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,6.522131);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,4.214147);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,4.213732);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,3.164877);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,6.068929);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,2.605661);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,2.108448);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,3.397045);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,1.33571);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.23169);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,0.9102743);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.5199395);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.1083014);
   VbbHcc_both_Sphericity_stack_4->SetBinError(23,0.06630981);
   VbbHcc_both_Sphericity_stack_4->SetEntries(17765);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->Draw("HIST");
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
