void dR_HZ_tags_16()
{
//=========Macro generated from canvas: dR_HZ_tags_16/dR_HZ_tags_16
//=========  (Thu Aug 10 12:23:23 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_tags_16 = new TCanvas("dR_HZ_tags_16", "dR_HZ_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tags_16->SetHighLightColor(2);
   dR_HZ_tags_16->Range(-1.2,-0.02130045,6.8,0.191704);
   dR_HZ_tags_16->SetFillColor(0);
   dR_HZ_tags_16->SetBorderMode(0);
   dR_HZ_tags_16->SetBorderSize(2);
   dR_HZ_tags_16->SetLeftMargin(0.15);
   dR_HZ_tags_16->SetFrameBorderMode(0);
   dR_HZ_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dR_HZ_stack_6 = new TH1D("VbbHcc_tags_dR_HZ_stack_6","",60,0,6);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(11,0.1440206);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(16,0.1333553);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(30,0.1445668);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(33,0.1622891);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(35,0.139529);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(37,0.08576627);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(42,0.1535887);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(44,0.1552273);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(47,0.1368996);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(56,0.1344897);
   VbbHcc_tags_dR_HZ_stack_6->SetBinContent(58,0.1587488);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(11,0.1440206);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(16,0.1333553);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(30,0.1445668);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(33,0.1622891);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(35,0.139529);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(37,0.08576627);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(42,0.1535887);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(44,0.1552273);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(47,0.1368996);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(56,0.1344897);
   VbbHcc_tags_dR_HZ_stack_6->SetBinError(58,0.1587488);
   VbbHcc_tags_dR_HZ_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_dR_HZ_stack_6->SetFillColor(ci);
   VbbHcc_tags_dR_HZ_stack_6->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_tags_dR_HZ_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_dR_HZ_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_dR_HZ_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_tags_16->Modified();
   dR_HZ_tags_16->cd();
   dR_HZ_tags_16->SetSelected(dR_HZ_tags_16);
}
