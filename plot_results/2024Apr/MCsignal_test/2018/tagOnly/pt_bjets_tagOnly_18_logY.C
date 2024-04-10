#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_bjets_tagOnly_18_logY()
{
//=========Macro generated from canvas: pt_bjets_tagOnly_18/pt_bjets_tagOnly_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *pt_bjets_tagOnly_18 = new TCanvas("pt_bjets_tagOnly_18", "pt_bjets_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_bjets_tagOnly_18->SetHighLightColor(2);
   pt_bjets_tagOnly_18->Range(-400,-1.159827e+09,2266.667,1.043844e+10);
   pt_bjets_tagOnly_18->SetFillColor(0);
   pt_bjets_tagOnly_18->SetFillStyle(4000);
   pt_bjets_tagOnly_18->SetBorderMode(0);
   pt_bjets_tagOnly_18->SetBorderSize(2);
   pt_bjets_tagOnly_18->SetLeftMargin(0.15);
   pt_bjets_tagOnly_18->SetFrameFillStyle(1000);
   pt_bjets_tagOnly_18->SetFrameBorderMode(0);
   pt_bjets_tagOnly_18->SetFrameFillStyle(1000);
   pt_bjets_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_bjets__115 = new TH1D("Jets_cut_pt_bjets__115","",500,0,2000);
   Jets_cut_pt_bjets__115->SetBinContent(12,3.700433e+09);
   Jets_cut_pt_bjets__115->SetBinContent(13,7.056388e+09);
   Jets_cut_pt_bjets__115->SetBinContent(14,8.836773e+09);
   Jets_cut_pt_bjets__115->SetBinContent(15,6.848918e+09);
   Jets_cut_pt_bjets__115->SetBinContent(16,5.564407e+09);
   Jets_cut_pt_bjets__115->SetBinContent(17,3.888749e+09);
   Jets_cut_pt_bjets__115->SetBinContent(18,3.119003e+09);
   Jets_cut_pt_bjets__115->SetBinContent(19,2.182075e+09);
   Jets_cut_pt_bjets__115->SetBinContent(20,1.493502e+09);
   Jets_cut_pt_bjets__115->SetBinContent(21,1.118554e+09);
   Jets_cut_pt_bjets__115->SetBinContent(22,7.508943e+08);
   Jets_cut_pt_bjets__115->SetBinContent(23,5.368193e+08);
   Jets_cut_pt_bjets__115->SetBinContent(24,2.956385e+08);
   Jets_cut_pt_bjets__115->SetBinContent(25,2.191831e+08);
   Jets_cut_pt_bjets__115->SetBinContent(26,1.5946e+08);
   Jets_cut_pt_bjets__115->SetBinContent(27,7.045151e+07);
   Jets_cut_pt_bjets__115->SetBinContent(28,6.222923e+07);
   Jets_cut_pt_bjets__115->SetBinContent(29,3.836321e+07);
   Jets_cut_pt_bjets__115->SetBinContent(30,1.054039e+07);
   Jets_cut_pt_bjets__115->SetBinContent(31,1.678351e+07);
   Jets_cut_pt_bjets__115->SetBinContent(32,8948991);
   Jets_cut_pt_bjets__115->SetBinContent(33,1907568);
   Jets_cut_pt_bjets__115->SetBinContent(34,8982338);
   Jets_cut_pt_bjets__115->SetBinContent(35,8195941);
   Jets_cut_pt_bjets__115->SetBinContent(37,9743766);
   Jets_cut_pt_bjets__115->SetBinContent(38,3824291);
   Jets_cut_pt_bjets__115->SetBinContent(39,4672474);
   Jets_cut_pt_bjets__115->SetBinContent(43,2432219);
   Jets_cut_pt_bjets__115->SetBinContent(44,4108921);
   Jets_cut_pt_bjets__115->SetBinContent(47,2999888);
   Jets_cut_pt_bjets__115->SetBinContent(49,2720852);
   Jets_cut_pt_bjets__115->SetBinContent(57,6113452);
   Jets_cut_pt_bjets__115->SetBinContent(61,1947379);
   Jets_cut_pt_bjets__115->SetBinContent(75,2380429);
   Jets_cut_pt_bjets__115->SetBinError(12,9.676076e+07);
   Jets_cut_pt_bjets__115->SetBinError(13,1.417309e+08);
   Jets_cut_pt_bjets__115->SetBinError(14,1.533118e+08);
   Jets_cut_pt_bjets__115->SetBinError(15,1.31847e+08);
   Jets_cut_pt_bjets__115->SetBinError(16,1.404037e+08);
   Jets_cut_pt_bjets__115->SetBinError(17,9.886226e+07);
   Jets_cut_pt_bjets__115->SetBinError(18,8.877878e+07);
   Jets_cut_pt_bjets__115->SetBinError(19,7.222494e+07);
   Jets_cut_pt_bjets__115->SetBinError(20,5.919319e+07);
   Jets_cut_pt_bjets__115->SetBinError(21,5.135918e+07);
   Jets_cut_pt_bjets__115->SetBinError(22,4.11542e+07);
   Jets_cut_pt_bjets__115->SetBinError(23,4.001065e+07);
   Jets_cut_pt_bjets__115->SetBinError(24,2.485678e+07);
   Jets_cut_pt_bjets__115->SetBinError(25,2.294059e+07);
   Jets_cut_pt_bjets__115->SetBinError(26,1.868044e+07);
   Jets_cut_pt_bjets__115->SetBinError(27,1.089082e+07);
   Jets_cut_pt_bjets__115->SetBinError(28,1.085878e+07);
   Jets_cut_pt_bjets__115->SetBinError(29,9572482);
   Jets_cut_pt_bjets__115->SetBinError(30,4914267);
   Jets_cut_pt_bjets__115->SetBinError(31,5337343);
   Jets_cut_pt_bjets__115->SetBinError(32,4296352);
   Jets_cut_pt_bjets__115->SetBinError(33,1907568);
   Jets_cut_pt_bjets__115->SetBinError(34,5370442);
   Jets_cut_pt_bjets__115->SetBinError(35,4252584);
   Jets_cut_pt_bjets__115->SetBinError(37,6614081);
   Jets_cut_pt_bjets__115->SetBinError(38,2898317);
   Jets_cut_pt_bjets__115->SetBinError(39,3422678);
   Jets_cut_pt_bjets__115->SetBinError(43,2432219);
   Jets_cut_pt_bjets__115->SetBinError(44,4108921);
   Jets_cut_pt_bjets__115->SetBinError(47,2999888);
   Jets_cut_pt_bjets__115->SetBinError(49,2720852);
   Jets_cut_pt_bjets__115->SetBinError(57,6113452);
   Jets_cut_pt_bjets__115->SetBinError(61,1947379);
   Jets_cut_pt_bjets__115->SetBinError(75,2380429);
   Jets_cut_pt_bjets__115->SetEntries(23933);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_bjets__115->SetLineColor(ci);
   Jets_cut_pt_bjets__115->GetXaxis()->SetTitle("p_{T} (b-jets) [GeV]");
   Jets_cut_pt_bjets__115->GetXaxis()->SetRange(1,500);
   Jets_cut_pt_bjets__115->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_bjets__115->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_bjets__115->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_bjets__115->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_bjets__115->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_bjets__115->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_bjets__115->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_bjets__115->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_bjets__115->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_bjets__115->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_bjets__115->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_bjets__115->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_bjets__115->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_bjets_tagOnly_18->Modified();
   pt_bjets_tagOnly_18->cd();
   pt_bjets_tagOnly_18->SetSelected(pt_bjets_tagOnly_18);
}
