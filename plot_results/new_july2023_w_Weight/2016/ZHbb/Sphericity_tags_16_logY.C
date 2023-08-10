void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:20:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-3.343211,1.133333,1.908412);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,12.75561);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,11.4835);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,6.35975);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,4.293397);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,2.837454);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,1.418672);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.5322013);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.230229);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.1601829);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1255752);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.06527887);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.04696836);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.03950455);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.0281951);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.02695335);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.01605247);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.01229207);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01197147);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.003040754);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.140755);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.1336029);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.09968283);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.08165479);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.06641127);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.0469543);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.02825522);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.01850708);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.01562542);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.01374314);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.009843449);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.008369787);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.007681122);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.006652627);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.00626499);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.004841964);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.004353702);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.00424607);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.002152051);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(28234);

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
