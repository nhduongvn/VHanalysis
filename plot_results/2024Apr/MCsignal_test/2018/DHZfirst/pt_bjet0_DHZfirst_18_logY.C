#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_bjet0_DHZfirst_18_logY()
{
//=========Macro generated from canvas: pt_bjet0_DHZfirst_18/pt_bjet0_DHZfirst_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *pt_bjet0_DHZfirst_18 = new TCanvas("pt_bjet0_DHZfirst_18", "pt_bjet0_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_bjet0_DHZfirst_18->SetHighLightColor(2);
   pt_bjet0_DHZfirst_18->Range(-400,-8.641875e+08,2266.667,7.777687e+09);
   pt_bjet0_DHZfirst_18->SetFillColor(0);
   pt_bjet0_DHZfirst_18->SetFillStyle(4000);
   pt_bjet0_DHZfirst_18->SetBorderMode(0);
   pt_bjet0_DHZfirst_18->SetBorderSize(2);
   pt_bjet0_DHZfirst_18->SetLeftMargin(0.15);
   pt_bjet0_DHZfirst_18->SetFrameFillStyle(1000);
   pt_bjet0_DHZfirst_18->SetFrameBorderMode(0);
   pt_bjet0_DHZfirst_18->SetFrameFillStyle(1000);
   pt_bjet0_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_bjet0__142 = new TH1D("Jets_cut_pt_bjet0__142","",500,0,2000);
   Jets_cut_pt_bjet0__142->SetBinContent(12,1.211456e+09);
   Jets_cut_pt_bjet0__142->SetBinContent(13,4.09072e+09);
   Jets_cut_pt_bjet0__142->SetBinContent(14,6.584286e+09);
   Jets_cut_pt_bjet0__142->SetBinContent(15,5.37485e+09);
   Jets_cut_pt_bjet0__142->SetBinContent(16,4.502395e+09);
   Jets_cut_pt_bjet0__142->SetBinContent(17,3.212281e+09);
   Jets_cut_pt_bjet0__142->SetBinContent(18,2.643217e+09);
   Jets_cut_pt_bjet0__142->SetBinContent(19,1.91085e+09);
   Jets_cut_pt_bjet0__142->SetBinContent(20,1.305568e+09);
   Jets_cut_pt_bjet0__142->SetBinContent(21,1.012169e+09);
   Jets_cut_pt_bjet0__142->SetBinContent(22,6.846886e+08);
   Jets_cut_pt_bjet0__142->SetBinContent(23,4.923663e+08);
   Jets_cut_pt_bjet0__142->SetBinContent(24,2.787541e+08);
   Jets_cut_pt_bjet0__142->SetBinContent(25,1.8968e+08);
   Jets_cut_pt_bjet0__142->SetBinContent(26,1.504053e+08);
   Jets_cut_pt_bjet0__142->SetBinContent(27,7.045151e+07);
   Jets_cut_pt_bjet0__142->SetBinContent(28,5.922277e+07);
   Jets_cut_pt_bjet0__142->SetBinContent(29,3.405158e+07);
   Jets_cut_pt_bjet0__142->SetBinContent(30,1.054039e+07);
   Jets_cut_pt_bjet0__142->SetBinContent(31,1.678351e+07);
   Jets_cut_pt_bjet0__142->SetBinContent(32,6071924);
   Jets_cut_pt_bjet0__142->SetBinContent(34,8982338);
   Jets_cut_pt_bjet0__142->SetBinContent(35,6131560);
   Jets_cut_pt_bjet0__142->SetBinContent(37,9743766);
   Jets_cut_pt_bjet0__142->SetBinContent(38,3824291);
   Jets_cut_pt_bjet0__142->SetBinContent(39,4672474);
   Jets_cut_pt_bjet0__142->SetBinContent(44,4108921);
   Jets_cut_pt_bjet0__142->SetBinContent(47,2999888);
   Jets_cut_pt_bjet0__142->SetBinContent(49,2720852);
   Jets_cut_pt_bjet0__142->SetBinContent(57,6113452);
   Jets_cut_pt_bjet0__142->SetBinContent(61,1947379);
   Jets_cut_pt_bjet0__142->SetBinContent(75,2380429);
   Jets_cut_pt_bjet0__142->SetBinError(12,5.621605e+07);
   Jets_cut_pt_bjet0__142->SetBinError(13,1.102554e+08);
   Jets_cut_pt_bjet0__142->SetBinError(14,1.332178e+08);
   Jets_cut_pt_bjet0__142->SetBinError(15,1.158765e+08);
   Jets_cut_pt_bjet0__142->SetBinError(16,1.305888e+08);
   Jets_cut_pt_bjet0__142->SetBinError(17,9.051148e+07);
   Jets_cut_pt_bjet0__142->SetBinError(18,8.197325e+07);
   Jets_cut_pt_bjet0__142->SetBinError(19,6.794198e+07);
   Jets_cut_pt_bjet0__142->SetBinError(20,5.523572e+07);
   Jets_cut_pt_bjet0__142->SetBinError(21,4.92423e+07);
   Jets_cut_pt_bjet0__142->SetBinError(22,3.960636e+07);
   Jets_cut_pt_bjet0__142->SetBinError(23,3.859189e+07);
   Jets_cut_pt_bjet0__142->SetBinError(24,2.433014e+07);
   Jets_cut_pt_bjet0__142->SetBinError(25,1.968461e+07);
   Jets_cut_pt_bjet0__142->SetBinError(26,1.816403e+07);
   Jets_cut_pt_bjet0__142->SetBinError(27,1.089082e+07);
   Jets_cut_pt_bjet0__142->SetBinError(28,1.063826e+07);
   Jets_cut_pt_bjet0__142->SetBinError(29,8546478);
   Jets_cut_pt_bjet0__142->SetBinError(30,4914267);
   Jets_cut_pt_bjet0__142->SetBinError(31,5337343);
   Jets_cut_pt_bjet0__142->SetBinError(32,3190788);
   Jets_cut_pt_bjet0__142->SetBinError(34,5370442);
   Jets_cut_pt_bjet0__142->SetBinError(35,3717902);
   Jets_cut_pt_bjet0__142->SetBinError(37,6614081);
   Jets_cut_pt_bjet0__142->SetBinError(38,2898317);
   Jets_cut_pt_bjet0__142->SetBinError(39,3422678);
   Jets_cut_pt_bjet0__142->SetBinError(44,4108921);
   Jets_cut_pt_bjet0__142->SetBinError(47,2999888);
   Jets_cut_pt_bjet0__142->SetBinError(49,2720852);
   Jets_cut_pt_bjet0__142->SetBinError(57,6113452);
   Jets_cut_pt_bjet0__142->SetBinError(61,1947379);
   Jets_cut_pt_bjet0__142->SetBinError(75,2380429);
   Jets_cut_pt_bjet0__142->SetEntries(17491);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_bjet0__142->SetLineColor(ci);
   Jets_cut_pt_bjet0__142->GetXaxis()->SetTitle("p_{T} (leading b-jet) [GeV]");
   Jets_cut_pt_bjet0__142->GetXaxis()->SetRange(1,500);
   Jets_cut_pt_bjet0__142->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_bjet0__142->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_bjet0__142->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_bjet0__142->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_bjet0__142->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_bjet0__142->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_bjet0__142->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_bjet0__142->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_bjet0__142->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_bjet0__142->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_bjet0__142->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_bjet0__142->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_bjet0__142->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_bjet0_DHZfirst_18->Modified();
   pt_bjet0_DHZfirst_18->cd();
   pt_bjet0_DHZfirst_18->SetSelected(pt_bjet0_DHZfirst_18);
}
