void H_jetpt_noJEC_tags_18_logY()
{
//=========Macro generated from canvas: H_jetpt_noJEC_tags_18/H_jetpt_noJEC_tags_18
//=========  (Tue Aug 22 09:16:33 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_noJEC_tags_18 = new TCanvas("H_jetpt_noJEC_tags_18", "H_jetpt_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_noJEC_tags_18->SetHighLightColor(2);
   H_jetpt_noJEC_tags_18->Range(-60,-1.515966,340,0.6179302);
   H_jetpt_noJEC_tags_18->SetFillColor(0);
   H_jetpt_noJEC_tags_18->SetBorderMode(0);
   H_jetpt_noJEC_tags_18->SetBorderSize(2);
   H_jetpt_noJEC_tags_18->SetLogy();
   H_jetpt_noJEC_tags_18->SetLeftMargin(0.15);
   H_jetpt_noJEC_tags_18->SetFrameBorderMode(0);
   H_jetpt_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetpt_noJEC_stack_7 = new TH1D("VbbHcc_tags_H_jetpt_noJEC_stack_7","",150,0,300);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(23,0.8100305);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(28,1.339651);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(32,0.4536609);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(34,0.3443088);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(37,0.3453961);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(39,0.8099532);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(44,0.9720723);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(59,0.4375283);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(61,0.3893187);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(63,0.09964461);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(68,0.3354616);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(72,0.4536609);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(74,0.7948742);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(75,0.2680755);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(84,0.3478356);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(87,0.2447034);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(88,0.5037459);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(100,0.3443727);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(110,0.3429098);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(123,0.4722652);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(138,0.4655773);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(151,2.713706);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(23,0.5794729);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(28,1.034414);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(32,0.4536609);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(34,0.3443088);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(37,0.3453961);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(39,0.5791008);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(44,0.6931746);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(59,0.4375283);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(61,0.3893187);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(63,0.09964461);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(68,0.3354616);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(72,0.4536609);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(74,0.5645202);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(75,0.2680755);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(84,0.3478356);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(87,0.2447034);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(88,0.5037459);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(100,0.3443727);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(110,0.3429098);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(123,0.4722652);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(138,0.4655773);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(151,1.128697);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetTitle("c-jet p_{T} [GeV]");
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_noJEC_tags_18->Modified();
   H_jetpt_noJEC_tags_18->cd();
   H_jetpt_noJEC_tags_18->SetSelected(H_jetpt_noJEC_tags_18);
}
