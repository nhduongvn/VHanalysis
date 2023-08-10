void Z_jetpt_noJEC_tags_16_logY()
{
//=========Macro generated from canvas: Z_jetpt_noJEC_tags_16/Z_jetpt_noJEC_tags_16
//=========  (Thu Aug 10 10:41:27 2023) by ROOT version 6.14/09
   TCanvas *Z_jetpt_noJEC_tags_16 = new TCanvas("Z_jetpt_noJEC_tags_16", "Z_jetpt_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_noJEC_tags_16->SetHighLightColor(2);
   Z_jetpt_noJEC_tags_16->Range(-60,-1.507218,340,-0.1121775);
   Z_jetpt_noJEC_tags_16->SetFillColor(0);
   Z_jetpt_noJEC_tags_16->SetBorderMode(0);
   Z_jetpt_noJEC_tags_16->SetBorderSize(2);
   Z_jetpt_noJEC_tags_16->SetLogy();
   Z_jetpt_noJEC_tags_16->SetLeftMargin(0.15);
   Z_jetpt_noJEC_tags_16->SetFrameBorderMode(0);
   Z_jetpt_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetpt_noJEC_stack_6 = new TH1D("VbbHcc_tags_Z_jetpt_noJEC_stack_6","",150,0,300);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinContent(24,0.2956444);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinContent(26,0.2814664);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinContent(27,0.1552273);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinContent(29,0.1535887);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinContent(38,0.1344897);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinContent(47,0.1440206);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinContent(52,0.1587488);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinContent(126,0.139529);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinContent(150,0.08576627);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinError(24,0.2100509);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinError(26,0.1991006);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinError(27,0.1552273);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinError(29,0.1535887);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinError(38,0.1344897);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinError(47,0.1440206);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinError(52,0.1587488);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinError(126,0.139529);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetBinError(150,0.08576627);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->SetFillColor(ci);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetXaxis()->SetTitle("b-jet p_{T} [GeV]");
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_noJEC_tags_16->Modified();
   Z_jetpt_noJEC_tags_16->cd();
   Z_jetpt_noJEC_tags_16->SetSelected(Z_jetpt_noJEC_tags_16);
}
