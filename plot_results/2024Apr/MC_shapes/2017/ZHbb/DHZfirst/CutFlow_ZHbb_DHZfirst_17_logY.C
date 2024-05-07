#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHbb_DHZfirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_ZHbb_DHZfirst_17/CutFlow_ZHbb_DHZfirst_17
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHbb_DHZfirst_17 = new TCanvas("CutFlow_ZHbb_DHZfirst_17", "CutFlow_ZHbb_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHbb_DHZfirst_17->SetHighLightColor(2);
   CutFlow_ZHbb_DHZfirst_17->Range(-1.4,0.9086043,7.933333,4.84891);
   CutFlow_ZHbb_DHZfirst_17->SetFillColor(0);
   CutFlow_ZHbb_DHZfirst_17->SetFillStyle(4000);
   CutFlow_ZHbb_DHZfirst_17->SetBorderMode(0);
   CutFlow_ZHbb_DHZfirst_17->SetBorderSize(2);
   CutFlow_ZHbb_DHZfirst_17->SetLogy();
   CutFlow_ZHbb_DHZfirst_17->SetLeftMargin(0.15);
   CutFlow_ZHbb_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_ZHbb_DHZfirst_17->SetFrameBorderMode(0);
   CutFlow_ZHbb_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_ZHbb_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__65 = new TH1D("CutFlow_evt_DHZfirst__65","",8,0,8);
   CutFlow_evt_DHZfirst__65->SetBinContent(1,15042.88);
   CutFlow_evt_DHZfirst__65->SetBinContent(2,15011.87);
   CutFlow_evt_DHZfirst__65->SetBinContent(3,2263.159);
   CutFlow_evt_DHZfirst__65->SetBinContent(4,505.4565);
   CutFlow_evt_DHZfirst__65->SetBinContent(5,232.7246);
   CutFlow_evt_DHZfirst__65->SetBinContent(6,132.4548);
   CutFlow_evt_DHZfirst__65->SetBinContent(7,40.1481);
   CutFlow_evt_DHZfirst__65->SetBinContent(8,13.42059);
   CutFlow_evt_DHZfirst__65->SetBinError(1,4.303714);
   CutFlow_evt_DHZfirst__65->SetBinError(2,4.299755);
   CutFlow_evt_DHZfirst__65->SetBinError(3,1.555413);
   CutFlow_evt_DHZfirst__65->SetBinError(4,0.64313);
   CutFlow_evt_DHZfirst__65->SetBinError(5,0.4530832);
   CutFlow_evt_DHZfirst__65->SetBinError(6,0.3526316);
   CutFlow_evt_DHZfirst__65->SetBinError(7,0.1932204);
   CutFlow_evt_DHZfirst__65->SetBinError(8,0.1126911);
   CutFlow_evt_DHZfirst__65->SetEntries(3.254059e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__65->SetLineColor(ci);
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__65->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__65->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__65->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__65->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__65->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__65->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__65->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__65->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__65->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__65->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__65->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHbb_DHZfirst_17->Modified();
   CutFlow_ZHbb_DHZfirst_17->cd();
   CutFlow_ZHbb_DHZfirst_17->SetSelected(CutFlow_ZHbb_DHZfirst_17);
}
