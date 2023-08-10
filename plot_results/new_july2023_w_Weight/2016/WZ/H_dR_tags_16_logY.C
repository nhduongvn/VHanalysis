void H_dR_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Thu Aug 10 12:20:03 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.2,-1.546914,6.8,0.3168859);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLogy();
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,0.7127824);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,0.4724554);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,0.4642738);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,0.3568839);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(9,0.11362);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,0.1142288);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.3672142);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.1182534);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,0.1156937);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,0.2400818);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.2418729);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,0.4715772);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.2358848);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.5882925);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.2096786);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,0.2256252);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,0.1297903);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(26,0.1194362);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(27,0.1148755);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(28,0.1115529);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,0.08719582);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,0.2923366);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,0.2365588);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.2321675);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.2063106);
   VbbHcc_tags_H_dR_stack_7->SetBinError(9,0.11362);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.1142288);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.21221);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.1182534);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,0.1156937);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,0.1697674);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.1711769);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.2362922);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.1674429);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.2632849);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.152295);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,0.1595429);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.1297903);
   VbbHcc_tags_H_dR_stack_7->SetBinError(26,0.1194362);
   VbbHcc_tags_H_dR_stack_7->SetBinError(27,0.1148755);
   VbbHcc_tags_H_dR_stack_7->SetBinError(28,0.1115529);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.08719582);
   VbbHcc_tags_H_dR_stack_7->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
