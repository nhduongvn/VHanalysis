#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_tagOnly_18_logY()
{
//=========Macro generated from canvas: pt_jet3_tagOnly_18/pt_jet3_tagOnly_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *pt_jet3_tagOnly_18 = new TCanvas("pt_jet3_tagOnly_18", "pt_jet3_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_jet3_tagOnly_18->SetHighLightColor(2);
   pt_jet3_tagOnly_18->Range(-200,-1.163638e+07,1133.333,1.047275e+08);
   pt_jet3_tagOnly_18->SetFillColor(0);
   pt_jet3_tagOnly_18->SetFillStyle(4000);
   pt_jet3_tagOnly_18->SetBorderMode(0);
   pt_jet3_tagOnly_18->SetBorderSize(2);
   pt_jet3_tagOnly_18->SetLeftMargin(0.15);
   pt_jet3_tagOnly_18->SetFrameFillStyle(1000);
   pt_jet3_tagOnly_18->SetFrameBorderMode(0);
   pt_jet3_tagOnly_18->SetFrameFillStyle(1000);
   pt_jet3_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_jet3__109 = new TH1D("Jets_cut_pt_jet3__109","",500,0,2000);
   Jets_cut_pt_jet3__109->SetBinContent(12,8.865816e+07);
   Jets_cut_pt_jet3__109->SetBinContent(13,6.977843e+07);
   Jets_cut_pt_jet3__109->SetBinContent(14,2.96993e+07);
   Jets_cut_pt_jet3__109->SetBinContent(15,1.082683e+07);
   Jets_cut_pt_jet3__109->SetBinContent(16,1.056222e+07);
   Jets_cut_pt_jet3__109->SetBinContent(17,9404761);
   Jets_cut_pt_jet3__109->SetBinContent(18,2745786);
   Jets_cut_pt_jet3__109->SetBinContent(19,3667238);
   Jets_cut_pt_jet3__109->SetBinContent(25,2082465);
   Jets_cut_pt_jet3__109->SetBinContent(28,1865945);
   Jets_cut_pt_jet3__109->SetBinError(12,1.427647e+07);
   Jets_cut_pt_jet3__109->SetBinError(13,1.334817e+07);
   Jets_cut_pt_jet3__109->SetBinError(14,8975915);
   Jets_cut_pt_jet3__109->SetBinError(15,5401823);
   Jets_cut_pt_jet3__109->SetBinError(16,5001925);
   Jets_cut_pt_jet3__109->SetBinError(17,4766690);
   Jets_cut_pt_jet3__109->SetBinError(18,2745786);
   Jets_cut_pt_jet3__109->SetBinError(19,2593149);
   Jets_cut_pt_jet3__109->SetBinError(25,2082465);
   Jets_cut_pt_jet3__109->SetBinError(28,1865945);
   Jets_cut_pt_jet3__109->SetEntries(123);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_jet3__109->SetLineColor(ci);
   Jets_cut_pt_jet3__109->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   Jets_cut_pt_jet3__109->GetXaxis()->SetRange(1,250);
   Jets_cut_pt_jet3__109->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_jet3__109->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_jet3__109->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_jet3__109->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_jet3__109->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_jet3__109->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_jet3__109->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_jet3__109->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_jet3__109->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_jet3__109->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_jet3__109->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_jet3__109->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_jet3__109->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_jet3_tagOnly_18->Modified();
   pt_jet3_tagOnly_18->cd();
   pt_jet3_tagOnly_18->SetSelected(pt_jet3_tagOnly_18);
}
