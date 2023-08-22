void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Tue Aug 22 09:16:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-3.447012,1.133333,1.760944);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,9.174864);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,8.064128);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,4.477811);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,3.0695);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,2.034533);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,1.033109);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.3913227);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.174106);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.1220335);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.09530394);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.04962542);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.03505788);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.03116225);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.02278412);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.02052946);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.0117632);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.009219504);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.008960967);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.002370356);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.1009532);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.09363284);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.07005928);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.05822402);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.04752511);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.03405146);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.02075954);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.01391939);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.01186647);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.01039447);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.007494197);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.006248388);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.005953528);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.005235113);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.004774663);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.003552323);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.003267754);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.003181684);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.001680435);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(28512);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->Draw("HIST");
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
