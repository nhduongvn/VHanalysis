#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_cjet3_tagOnly_18_logY()
{
//=========Macro generated from canvas: pt_cjet3_tagOnly_18/pt_cjet3_tagOnly_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *pt_cjet3_tagOnly_18 = new TCanvas("pt_cjet3_tagOnly_18", "pt_cjet3_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_cjet3_tagOnly_18->SetHighLightColor(2);
   pt_cjet3_tagOnly_18->Range(-400,-4492896,2266.667,4.043606e+07);
   pt_cjet3_tagOnly_18->SetFillColor(0);
   pt_cjet3_tagOnly_18->SetFillStyle(4000);
   pt_cjet3_tagOnly_18->SetBorderMode(0);
   pt_cjet3_tagOnly_18->SetBorderSize(2);
   pt_cjet3_tagOnly_18->SetLeftMargin(0.15);
   pt_cjet3_tagOnly_18->SetFrameFillStyle(1000);
   pt_cjet3_tagOnly_18->SetFrameBorderMode(0);
   pt_cjet3_tagOnly_18->SetFrameFillStyle(1000);
   pt_cjet3_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_cjet3__124 = new TH1D("Jets_cut_pt_cjet3__124","",500,0,2000);
   Jets_cut_pt_cjet3__124->SetBinContent(12,3.423159e+07);
   Jets_cut_pt_cjet3__124->SetBinContent(13,1.463932e+07);
   Jets_cut_pt_cjet3__124->SetBinContent(14,1.194335e+07);
   Jets_cut_pt_cjet3__124->SetBinContent(15,2911854);
   Jets_cut_pt_cjet3__124->SetBinContent(16,3474878);
   Jets_cut_pt_cjet3__124->SetBinContent(17,1944084);
   Jets_cut_pt_cjet3__124->SetBinContent(19,1840732);
   Jets_cut_pt_cjet3__124->SetBinContent(25,2082465);
   Jets_cut_pt_cjet3__124->SetBinContent(28,1865945);
   Jets_cut_pt_cjet3__124->SetBinError(12,1.008861e+07);
   Jets_cut_pt_cjet3__124->SetBinError(13,6204103);
   Jets_cut_pt_cjet3__124->SetBinError(14,5501674);
   Jets_cut_pt_cjet3__124->SetBinError(15,2231565);
   Jets_cut_pt_cjet3__124->SetBinError(16,2461038);
   Jets_cut_pt_cjet3__124->SetBinError(17,1944084);
   Jets_cut_pt_cjet3__124->SetBinError(19,1840732);
   Jets_cut_pt_cjet3__124->SetBinError(25,2082465);
   Jets_cut_pt_cjet3__124->SetBinError(28,1865945);
   Jets_cut_pt_cjet3__124->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_cjet3__124->SetLineColor(ci);
   Jets_cut_pt_cjet3__124->GetXaxis()->SetTitle("p_{T} (sub^{(3)}leading c-jet) [GeV]");
   Jets_cut_pt_cjet3__124->GetXaxis()->SetRange(1,500);
   Jets_cut_pt_cjet3__124->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_cjet3__124->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_cjet3__124->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_cjet3__124->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_cjet3__124->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_cjet3__124->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_cjet3__124->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_cjet3__124->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_cjet3__124->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_cjet3__124->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_cjet3__124->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_cjet3__124->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_cjet3__124->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_cjet3_tagOnly_18->Modified();
   pt_cjet3_tagOnly_18->cd();
   pt_cjet3_tagOnly_18->SetSelected(pt_cjet3_tagOnly_18);
}
