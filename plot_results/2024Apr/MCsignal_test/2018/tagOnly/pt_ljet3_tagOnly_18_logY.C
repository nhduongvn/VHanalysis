#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_ljet3_tagOnly_18_logY()
{
//=========Macro generated from canvas: pt_ljet3_tagOnly_18/pt_ljet3_tagOnly_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *pt_ljet3_tagOnly_18 = new TCanvas("pt_ljet3_tagOnly_18", "pt_ljet3_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_ljet3_tagOnly_18->SetHighLightColor(2);
   pt_ljet3_tagOnly_18->Range(-400,-6798578,2266.667,6.11872e+07);
   pt_ljet3_tagOnly_18->SetFillColor(0);
   pt_ljet3_tagOnly_18->SetFillStyle(4000);
   pt_ljet3_tagOnly_18->SetBorderMode(0);
   pt_ljet3_tagOnly_18->SetBorderSize(2);
   pt_ljet3_tagOnly_18->SetLeftMargin(0.15);
   pt_ljet3_tagOnly_18->SetFrameFillStyle(1000);
   pt_ljet3_tagOnly_18->SetFrameBorderMode(0);
   pt_ljet3_tagOnly_18->SetFrameFillStyle(1000);
   pt_ljet3_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_ljet3__114 = new TH1D("Jets_cut_pt_ljet3__114","",500,0,2000);
   Jets_cut_pt_ljet3__114->SetBinContent(12,5.179869e+07);
   Jets_cut_pt_ljet3__114->SetBinContent(13,5.15414e+07);
   Jets_cut_pt_ljet3__114->SetBinContent(14,1.351956e+07);
   Jets_cut_pt_ljet3__114->SetBinContent(15,7914975);
   Jets_cut_pt_ljet3__114->SetBinContent(16,7087345);
   Jets_cut_pt_ljet3__114->SetBinContent(17,4901655);
   Jets_cut_pt_ljet3__114->SetBinContent(19,1826507);
   Jets_cut_pt_ljet3__114->SetBinError(12,9926645);
   Jets_cut_pt_ljet3__114->SetBinError(13,1.16142e+07);
   Jets_cut_pt_ljet3__114->SetBinError(14,5687852);
   Jets_cut_pt_ljet3__114->SetBinError(15,4919330);
   Jets_cut_pt_ljet3__114->SetBinError(16,4354600);
   Jets_cut_pt_ljet3__114->SetBinError(17,3520410);
   Jets_cut_pt_ljet3__114->SetBinError(19,1826507);
   Jets_cut_pt_ljet3__114->SetEntries(79);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_ljet3__114->SetLineColor(ci);
   Jets_cut_pt_ljet3__114->GetXaxis()->SetTitle("p_{T} (sub^{(3)}leading l-jet) [GeV]");
   Jets_cut_pt_ljet3__114->GetXaxis()->SetRange(1,500);
   Jets_cut_pt_ljet3__114->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_ljet3__114->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_ljet3__114->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_ljet3__114->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_ljet3__114->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_ljet3__114->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_ljet3__114->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_ljet3__114->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_ljet3__114->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_ljet3__114->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_ljet3__114->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_ljet3__114->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_ljet3__114->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_ljet3_tagOnly_18->Modified();
   pt_ljet3_tagOnly_18->cd();
   pt_ljet3_tagOnly_18->SetSelected(pt_ljet3_tagOnly_18);
}
