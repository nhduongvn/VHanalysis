void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Tue Aug 22 09:20:42 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-8.341703,1.133333,75.07533);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,63.55583);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,30.90044);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,25.88753);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,12.67589);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,9.638333);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,3.588753);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,2.96834);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,0.779465);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.212082);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.117998);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.6537456);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,0.4523432);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,1.498734);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,0.07811603);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.07312787);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.2120956);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.000519684);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,0.05584473);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.07194844);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(20,0.1401813);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,6.919103);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,2.82348);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,5.639778);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,1.794756);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,1.691006);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,0.4981152);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,0.8289694);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,0.2337133);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.3773963);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.8425591);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.2042234);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.1853045);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.7984037);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,0.06366256);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.05834525);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.1109284);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.0003684261);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,0.05558525);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.06581722);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(20,0.1401813);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(3148);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
