#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_bjet3_DHZfirst_18_logY()
{
//=========Macro generated from canvas: pt_bjet3_DHZfirst_18/pt_bjet3_DHZfirst_18
//=========  (Tue Apr  9 15:53:54 2024) by ROOT version 6.28/10
   TCanvas *pt_bjet3_DHZfirst_18 = new TCanvas("pt_bjet3_DHZfirst_18", "pt_bjet3_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_bjet3_DHZfirst_18->SetHighLightColor(2);
   pt_bjet3_DHZfirst_18->Range(-400,-556025.9,2266.667,5004233);
   pt_bjet3_DHZfirst_18->SetFillColor(0);
   pt_bjet3_DHZfirst_18->SetFillStyle(4000);
   pt_bjet3_DHZfirst_18->SetBorderMode(0);
   pt_bjet3_DHZfirst_18->SetBorderSize(2);
   pt_bjet3_DHZfirst_18->SetLeftMargin(0.15);
   pt_bjet3_DHZfirst_18->SetFrameFillStyle(1000);
   pt_bjet3_DHZfirst_18->SetFrameBorderMode(0);
   pt_bjet3_DHZfirst_18->SetFrameFillStyle(1000);
   pt_bjet3_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_bjet3__145 = new TH1D("Jets_cut_pt_bjet3__145","",500,0,2000);
   Jets_cut_pt_bjet3__145->SetBinContent(12,2627887);
   Jets_cut_pt_bjet3__145->SetBinContent(13,3597714);
   Jets_cut_pt_bjet3__145->SetBinContent(14,4236388);
   Jets_cut_pt_bjet3__145->SetBinContent(17,2559022);
   Jets_cut_pt_bjet3__145->SetBinContent(18,2745786);
   Jets_cut_pt_bjet3__145->SetBinError(12,1870591);
   Jets_cut_pt_bjet3__145->SetBinError(13,2189312);
   Jets_cut_pt_bjet3__145->SetBinError(14,4236388);
   Jets_cut_pt_bjet3__145->SetBinError(17,2559022);
   Jets_cut_pt_bjet3__145->SetBinError(18,2745786);
   Jets_cut_pt_bjet3__145->SetEntries(8);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_bjet3__145->SetLineColor(ci);
   Jets_cut_pt_bjet3__145->GetXaxis()->SetTitle("p_{T} (sub^{(3)}leading b-jet) [GeV]");
   Jets_cut_pt_bjet3__145->GetXaxis()->SetRange(1,500);
   Jets_cut_pt_bjet3__145->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_bjet3__145->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_bjet3__145->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_bjet3__145->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_bjet3__145->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_bjet3__145->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_bjet3__145->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_bjet3__145->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_bjet3__145->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_bjet3__145->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_bjet3__145->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_bjet3__145->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_bjet3__145->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_bjet3_DHZfirst_18->Modified();
   pt_bjet3_DHZfirst_18->cd();
   pt_bjet3_DHZfirst_18->SetSelected(pt_bjet3_DHZfirst_18);
}
