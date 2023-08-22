void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Tue Aug 22 09:16:28 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-1.256368,1.133333,2.778746);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,125.2234);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,68.81157);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,60.12037);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,20.14719);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,17.76069);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,12.29103);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,8.202652);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,5.77036);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.679178);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.081844);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.9298845);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,1.781176);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,1.101893);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,1.451272);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.3218673);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.2806555);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.418302);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,12.79702);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,6.407703);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,9.114538);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.944958);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.910031);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,3.934954);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,2.351531);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,1.218642);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.4625651);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.4358241);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.3978825);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.667305);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.383839);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,0.6326254);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.1756446);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.1503527);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.3085287);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(2023);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
