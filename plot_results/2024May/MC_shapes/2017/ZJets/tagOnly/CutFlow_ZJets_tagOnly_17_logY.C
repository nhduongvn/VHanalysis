#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZJets_tagOnly_17_logY()
{
//=========Macro generated from canvas: CutFlow_ZJets_tagOnly_17/CutFlow_ZJets_tagOnly_17
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZJets_tagOnly_17 = new TCanvas("CutFlow_ZJets_tagOnly_17", "CutFlow_ZJets_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZJets_tagOnly_17->SetHighLightColor(2);
   CutFlow_ZJets_tagOnly_17->Range(-1.4,3.653467,7.933333,8.378471);
   CutFlow_ZJets_tagOnly_17->SetFillColor(0);
   CutFlow_ZJets_tagOnly_17->SetFillStyle(4000);
   CutFlow_ZJets_tagOnly_17->SetBorderMode(0);
   CutFlow_ZJets_tagOnly_17->SetBorderSize(2);
   CutFlow_ZJets_tagOnly_17->SetLogy();
   CutFlow_ZJets_tagOnly_17->SetLeftMargin(0.15);
   CutFlow_ZJets_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_ZJets_tagOnly_17->SetFrameBorderMode(0);
   CutFlow_ZJets_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_ZJets_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__44 = new TH1D("CutFlow_evt_tagOnly__44","",8,0,8);
   CutFlow_evt_tagOnly__44->SetBinContent(1,4.250321e+07);
   CutFlow_evt_tagOnly__44->SetBinContent(2,4.247065e+07);
   CutFlow_evt_tagOnly__44->SetBinContent(3,3177522);
   CutFlow_evt_tagOnly__44->SetBinContent(4,67034.98);
   CutFlow_evt_tagOnly__44->SetBinContent(5,59096.65);
   CutFlow_evt_tagOnly__44->SetBinContent(6,41727.64);
   CutFlow_evt_tagOnly__44->SetBinContent(7,26729.93);
   CutFlow_evt_tagOnly__44->SetBinContent(8,9992.722);
   CutFlow_evt_tagOnly__44->SetBinError(1,10244.62);
   CutFlow_evt_tagOnly__44->SetBinError(2,10243.39);
   CutFlow_evt_tagOnly__44->SetBinError(3,1987.018);
   CutFlow_evt_tagOnly__44->SetBinError(4,179.5401);
   CutFlow_evt_tagOnly__44->SetBinError(5,167.9054);
   CutFlow_evt_tagOnly__44->SetBinError(6,142.6135);
   CutFlow_evt_tagOnly__44->SetBinError(7,112.4348);
   CutFlow_evt_tagOnly__44->SetBinError(8,64.14104);
   CutFlow_evt_tagOnly__44->SetEntries(1.070519e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__44->SetLineColor(ci);
   CutFlow_evt_tagOnly__44->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__44->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__44->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__44->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__44->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__44->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__44->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__44->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__44->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__44->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__44->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__44->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__44->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__44->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__44->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__44->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__44->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__44->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__44->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__44->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__44->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__44->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__44->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZJets_tagOnly_17->Modified();
   CutFlow_ZJets_tagOnly_17->cd();
   CutFlow_ZJets_tagOnly_17->SetSelected(CutFlow_ZJets_tagOnly_17);
}
