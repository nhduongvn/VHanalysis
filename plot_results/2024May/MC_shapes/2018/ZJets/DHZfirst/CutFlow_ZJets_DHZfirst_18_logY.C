#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZJets_DHZfirst_18_logY()
{
//=========Macro generated from canvas: CutFlow_ZJets_DHZfirst_18/CutFlow_ZJets_DHZfirst_18
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZJets_DHZfirst_18 = new TCanvas("CutFlow_ZJets_DHZfirst_18", "CutFlow_ZJets_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZJets_DHZfirst_18->SetHighLightColor(2);
   CutFlow_ZJets_DHZfirst_18->Range(-1.4,2.846932,7.933333,8.702297);
   CutFlow_ZJets_DHZfirst_18->SetFillColor(0);
   CutFlow_ZJets_DHZfirst_18->SetFillStyle(4000);
   CutFlow_ZJets_DHZfirst_18->SetBorderMode(0);
   CutFlow_ZJets_DHZfirst_18->SetBorderSize(2);
   CutFlow_ZJets_DHZfirst_18->SetLogy();
   CutFlow_ZJets_DHZfirst_18->SetLeftMargin(0.15);
   CutFlow_ZJets_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_ZJets_DHZfirst_18->SetFrameBorderMode(0);
   CutFlow_ZJets_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_ZJets_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__75 = new TH1D("CutFlow_evt_DHZfirst__75","",8,0,8);
   CutFlow_evt_DHZfirst__75->SetBinContent(1,6.90576e+07);
   CutFlow_evt_DHZfirst__75->SetBinContent(2,6.900853e+07);
   CutFlow_evt_DHZfirst__75->SetBinContent(3,5159935);
   CutFlow_evt_DHZfirst__75->SetBinContent(4,80388.58);
   CutFlow_evt_DHZfirst__75->SetBinContent(5,35277.55);
   CutFlow_evt_DHZfirst__75->SetBinContent(6,16022.24);
   CutFlow_evt_DHZfirst__75->SetBinContent(7,5413.755);
   CutFlow_evt_DHZfirst__75->SetBinContent(8,1545.832);
   CutFlow_evt_DHZfirst__75->SetBinError(1,15562.92);
   CutFlow_evt_DHZfirst__75->SetBinError(2,15561.42);
   CutFlow_evt_DHZfirst__75->SetBinError(3,3027.834);
   CutFlow_evt_DHZfirst__75->SetBinError(4,200.2639);
   CutFlow_evt_DHZfirst__75->SetBinError(5,136.4904);
   CutFlow_evt_DHZfirst__75->SetBinError(6,93.96363);
   CutFlow_evt_DHZfirst__75->SetBinError(7,51.57014);
   CutFlow_evt_DHZfirst__75->SetBinError(8,28.18469);
   CutFlow_evt_DHZfirst__75->SetEntries(1.176968e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__75->SetLineColor(ci);
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__75->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__75->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__75->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__75->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__75->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__75->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__75->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__75->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__75->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__75->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__75->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZJets_DHZfirst_18->Modified();
   CutFlow_ZJets_DHZfirst_18->cd();
   CutFlow_ZJets_DHZfirst_18->SetSelected(CutFlow_ZJets_DHZfirst_18);
}
