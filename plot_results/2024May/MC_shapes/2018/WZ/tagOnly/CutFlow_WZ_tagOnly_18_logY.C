#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WZ_tagOnly_18_logY()
{
//=========Macro generated from canvas: CutFlow_WZ_tagOnly_18/CutFlow_WZ_tagOnly_18
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WZ_tagOnly_18 = new TCanvas("CutFlow_WZ_tagOnly_18", "CutFlow_WZ_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WZ_tagOnly_18->SetHighLightColor(2);
   CutFlow_WZ_tagOnly_18->Range(-1.4,1.841157,7.933333,7.269446);
   CutFlow_WZ_tagOnly_18->SetFillColor(0);
   CutFlow_WZ_tagOnly_18->SetFillStyle(4000);
   CutFlow_WZ_tagOnly_18->SetBorderMode(0);
   CutFlow_WZ_tagOnly_18->SetBorderSize(2);
   CutFlow_WZ_tagOnly_18->SetLogy();
   CutFlow_WZ_tagOnly_18->SetLeftMargin(0.15);
   CutFlow_WZ_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_WZ_tagOnly_18->SetFrameBorderMode(0);
   CutFlow_WZ_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_WZ_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__57 = new TH1D("CutFlow_evt_tagOnly__57","",8,0,8);
   CutFlow_evt_tagOnly__57->SetBinContent(1,2812341);
   CutFlow_evt_tagOnly__57->SetBinContent(2,2746083);
   CutFlow_evt_tagOnly__57->SetBinContent(3,71073.24);
   CutFlow_evt_tagOnly__57->SetBinContent(4,962.359);
   CutFlow_evt_tagOnly__57->SetBinContent(5,870.9756);
   CutFlow_evt_tagOnly__57->SetBinContent(6,631.1828);
   CutFlow_evt_tagOnly__57->SetBinContent(7,484.1902);
   CutFlow_evt_tagOnly__57->SetBinContent(8,181.3499);
   CutFlow_evt_tagOnly__57->SetBinError(1,998.0625);
   CutFlow_evt_tagOnly__57->SetBinError(2,986.2353);
   CutFlow_evt_tagOnly__57->SetBinError(3,158.6634);
   CutFlow_evt_tagOnly__57->SetBinError(4,18.46258);
   CutFlow_evt_tagOnly__57->SetBinError(5,17.56413);
   CutFlow_evt_tagOnly__57->SetBinError(6,14.95207);
   CutFlow_evt_tagOnly__57->SetBinError(7,13.09579);
   CutFlow_evt_tagOnly__57->SetBinError(8,8.014611);
   CutFlow_evt_tagOnly__57->SetEntries(1.590243e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__57->SetLineColor(ci);
   CutFlow_evt_tagOnly__57->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__57->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__57->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__57->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__57->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__57->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__57->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__57->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__57->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__57->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__57->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__57->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__57->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__57->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__57->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__57->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__57->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__57->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__57->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__57->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__57->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__57->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__57->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WZ_tagOnly_18->Modified();
   CutFlow_WZ_tagOnly_18->cd();
   CutFlow_WZ_tagOnly_18->SetSelected(CutFlow_WZ_tagOnly_18);
}
