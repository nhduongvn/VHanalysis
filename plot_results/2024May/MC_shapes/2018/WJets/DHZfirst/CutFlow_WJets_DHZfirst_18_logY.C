#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WJets_DHZfirst_18_logY()
{
//=========Macro generated from canvas: CutFlow_WJets_DHZfirst_18/CutFlow_WJets_DHZfirst_18
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WJets_DHZfirst_18 = new TCanvas("CutFlow_WJets_DHZfirst_18", "CutFlow_WJets_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WJets_DHZfirst_18->SetHighLightColor(2);
   CutFlow_WJets_DHZfirst_18->Range(-1.4,2.356648,7.933333,9.431928);
   CutFlow_WJets_DHZfirst_18->SetFillColor(0);
   CutFlow_WJets_DHZfirst_18->SetFillStyle(4000);
   CutFlow_WJets_DHZfirst_18->SetBorderMode(0);
   CutFlow_WJets_DHZfirst_18->SetBorderSize(2);
   CutFlow_WJets_DHZfirst_18->SetLogy();
   CutFlow_WJets_DHZfirst_18->SetLeftMargin(0.15);
   CutFlow_WJets_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_WJets_DHZfirst_18->SetFrameBorderMode(0);
   CutFlow_WJets_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_WJets_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__72 = new TH1D("CutFlow_evt_DHZfirst__72","",8,0,8);
   CutFlow_evt_DHZfirst__72->SetBinContent(1,2.798024e+08);
   CutFlow_evt_DHZfirst__72->SetBinContent(2,2.728908e+08);
   CutFlow_evt_DHZfirst__72->SetBinContent(3,1.463278e+07);
   CutFlow_evt_DHZfirst__72->SetBinContent(4,56796.77);
   CutFlow_evt_DHZfirst__72->SetBinContent(5,16422.22);
   CutFlow_evt_DHZfirst__72->SetBinContent(6,5212.379);
   CutFlow_evt_DHZfirst__72->SetBinContent(7,2318.492);
   CutFlow_evt_DHZfirst__72->SetBinContent(8,741.2813);
   CutFlow_evt_DHZfirst__72->SetBinError(1,42050.67);
   CutFlow_evt_DHZfirst__72->SetBinError(2,41973.56);
   CutFlow_evt_DHZfirst__72->SetBinError(3,8592.809);
   CutFlow_evt_DHZfirst__72->SetBinError(4,314.7625);
   CutFlow_evt_DHZfirst__72->SetBinError(5,173.3149);
   CutFlow_evt_DHZfirst__72->SetBinError(6,98.31165);
   CutFlow_evt_DHZfirst__72->SetBinError(7,61.5802);
   CutFlow_evt_DHZfirst__72->SetBinError(8,29.93514);
   CutFlow_evt_DHZfirst__72->SetEntries(3.884354e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__72->SetLineColor(ci);
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__72->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__72->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__72->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__72->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__72->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__72->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__72->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__72->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__72->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__72->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__72->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WJets_DHZfirst_18->Modified();
   CutFlow_WJets_DHZfirst_18->cd();
   CutFlow_WJets_DHZfirst_18->SetSelected(CutFlow_WJets_DHZfirst_18);
}
