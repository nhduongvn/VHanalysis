#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WJets_tagOnly_17_logY()
{
//=========Macro generated from canvas: CutFlow_WJets_tagOnly_17/CutFlow_WJets_tagOnly_17
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WJets_tagOnly_17 = new TCanvas("CutFlow_WJets_tagOnly_17", "CutFlow_WJets_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WJets_tagOnly_17->SetHighLightColor(2);
   CutFlow_WJets_tagOnly_17->Range(-1.4,3.264237,7.933333,9.096874);
   CutFlow_WJets_tagOnly_17->SetFillColor(0);
   CutFlow_WJets_tagOnly_17->SetFillStyle(4000);
   CutFlow_WJets_tagOnly_17->SetBorderMode(0);
   CutFlow_WJets_tagOnly_17->SetBorderSize(2);
   CutFlow_WJets_tagOnly_17->SetLogy();
   CutFlow_WJets_tagOnly_17->SetLeftMargin(0.15);
   CutFlow_WJets_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_WJets_tagOnly_17->SetFrameBorderMode(0);
   CutFlow_WJets_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_WJets_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__41 = new TH1D("CutFlow_evt_tagOnly__41","",8,0,8);
   CutFlow_evt_tagOnly__41->SetBinContent(1,1.722113e+08);
   CutFlow_evt_tagOnly__41->SetBinContent(2,1.679288e+08);
   CutFlow_evt_tagOnly__41->SetBinContent(3,9021972);
   CutFlow_evt_tagOnly__41->SetBinContent(4,64617.49);
   CutFlow_evt_tagOnly__41->SetBinContent(5,42001.19);
   CutFlow_evt_tagOnly__41->SetBinContent(6,18504.89);
   CutFlow_evt_tagOnly__41->SetBinContent(7,14077.68);
   CutFlow_evt_tagOnly__41->SetBinContent(8,5736.86);
   CutFlow_evt_tagOnly__41->SetBinError(1,24840.3);
   CutFlow_evt_tagOnly__41->SetBinError(2,24782.6);
   CutFlow_evt_tagOnly__41->SetBinError(3,5019.963);
   CutFlow_evt_tagOnly__41->SetBinError(4,288.5297);
   CutFlow_evt_tagOnly__41->SetBinError(5,227.8566);
   CutFlow_evt_tagOnly__41->SetBinError(6,147.1105);
   CutFlow_evt_tagOnly__41->SetBinError(7,127.0166);
   CutFlow_evt_tagOnly__41->SetBinError(8,77.03542);
   CutFlow_evt_tagOnly__41->SetEntries(3.375568e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__41->SetLineColor(ci);
   CutFlow_evt_tagOnly__41->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__41->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__41->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__41->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__41->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__41->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__41->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__41->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__41->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__41->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__41->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__41->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__41->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__41->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__41->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__41->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__41->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__41->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__41->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__41->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__41->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__41->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__41->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WJets_tagOnly_17->Modified();
   CutFlow_WJets_tagOnly_17->cd();
   CutFlow_WJets_tagOnly_17->SetSelected(CutFlow_WJets_tagOnly_17);
}
