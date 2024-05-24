#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_QCD_DHZfirst_18_logY()
{
//=========Macro generated from canvas: CutFlow_QCD_DHZfirst_18/CutFlow_QCD_DHZfirst_18
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_QCD_DHZfirst_18 = new TCanvas("CutFlow_QCD_DHZfirst_18", "CutFlow_QCD_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_QCD_DHZfirst_18->SetHighLightColor(2);
   CutFlow_QCD_DHZfirst_18->Range(-1.4,4.645876,7.933333,13.40825);
   CutFlow_QCD_DHZfirst_18->SetFillColor(0);
   CutFlow_QCD_DHZfirst_18->SetFillStyle(4000);
   CutFlow_QCD_DHZfirst_18->SetBorderMode(0);
   CutFlow_QCD_DHZfirst_18->SetBorderSize(2);
   CutFlow_QCD_DHZfirst_18->SetLogy();
   CutFlow_QCD_DHZfirst_18->SetLeftMargin(0.15);
   CutFlow_QCD_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_QCD_DHZfirst_18->SetFrameBorderMode(0);
   CutFlow_QCD_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_QCD_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__69 = new TH1D("CutFlow_evt_DHZfirst__69","",8,0,8);
   CutFlow_evt_DHZfirst__69->SetBinContent(1,1.796649e+12);
   CutFlow_evt_DHZfirst__69->SetBinContent(2,1.796542e+12);
   CutFlow_evt_DHZfirst__69->SetBinContent(3,3.881641e+09);
   CutFlow_evt_DHZfirst__69->SetBinContent(4,1.226984e+07);
   CutFlow_evt_DHZfirst__69->SetBinContent(5,4949787);
   CutFlow_evt_DHZfirst__69->SetBinContent(6,2023242);
   CutFlow_evt_DHZfirst__69->SetBinContent(7,665492.4);
   CutFlow_evt_DHZfirst__69->SetBinContent(8,164135.2);
   CutFlow_evt_DHZfirst__69->SetBinError(1,1.82376e+08);
   CutFlow_evt_DHZfirst__69->SetBinError(2,1.823717e+08);
   CutFlow_evt_DHZfirst__69->SetBinError(3,2656364);
   CutFlow_evt_DHZfirst__69->SetBinError(4,100055.8);
   CutFlow_evt_DHZfirst__69->SetBinError(5,44213.1);
   CutFlow_evt_DHZfirst__69->SetBinError(6,21706.46);
   CutFlow_evt_DHZfirst__69->SetBinError(7,11711.12);
   CutFlow_evt_DHZfirst__69->SetBinError(8,5724.639);
   CutFlow_evt_DHZfirst__69->SetEntries(7.323656e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__69->SetLineColor(ci);
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__69->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__69->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__69->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__69->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__69->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__69->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__69->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__69->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__69->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__69->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__69->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_QCD_DHZfirst_18->Modified();
   CutFlow_QCD_DHZfirst_18->cd();
   CutFlow_QCD_DHZfirst_18->SetSelected(CutFlow_QCD_DHZfirst_18);
}
