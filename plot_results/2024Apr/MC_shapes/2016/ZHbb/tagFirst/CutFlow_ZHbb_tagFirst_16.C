#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHbb_tagFirst_16()
{
//=========Macro generated from canvas: CutFlow_ZHbb_tagFirst_16/CutFlow_ZHbb_tagFirst_16
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHbb_tagFirst_16 = new TCanvas("CutFlow_ZHbb_tagFirst_16", "CutFlow_ZHbb_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHbb_tagFirst_16->SetHighLightColor(2);
   CutFlow_ZHbb_tagFirst_16->Range(-1.2,-1926.67,6.8,17340.03);
   CutFlow_ZHbb_tagFirst_16->SetFillColor(0);
   CutFlow_ZHbb_tagFirst_16->SetFillStyle(4000);
   CutFlow_ZHbb_tagFirst_16->SetBorderMode(0);
   CutFlow_ZHbb_tagFirst_16->SetBorderSize(2);
   CutFlow_ZHbb_tagFirst_16->SetLeftMargin(0.15);
   CutFlow_ZHbb_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_ZHbb_tagFirst_16->SetFrameBorderMode(0);
   CutFlow_ZHbb_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_ZHbb_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__4 = new TH1D("CutFlow_evt_tagFirst__4","",5,0,5);
   CutFlow_evt_tagFirst__4->SetBinContent(1,14679.39);
   CutFlow_evt_tagFirst__4->SetBinContent(2,14654.27);
   CutFlow_evt_tagFirst__4->SetBinContent(3,2193.632);
   CutFlow_evt_tagFirst__4->SetBinContent(4,866.4645);
   CutFlow_evt_tagFirst__4->SetBinContent(5,143.2835);
   CutFlow_evt_tagFirst__4->SetBinError(1,4.305276);
   CutFlow_evt_tagFirst__4->SetBinError(2,4.302151);
   CutFlow_evt_tagFirst__4->SetBinError(3,1.546363);
   CutFlow_evt_tagFirst__4->SetBinError(4,0.9611962);
   CutFlow_evt_tagFirst__4->SetBinError(5,0.3879326);
   CutFlow_evt_tagFirst__4->SetEntries(3.129862e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__4->SetLineColor(ci);
   CutFlow_evt_tagFirst__4->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__4->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__4->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__4->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__4->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__4->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__4->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__4->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__4->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__4->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__4->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__4->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__4->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__4->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__4->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__4->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__4->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__4->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__4->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__4->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHbb_tagFirst_16->Modified();
   CutFlow_ZHbb_tagFirst_16->cd();
   CutFlow_ZHbb_tagFirst_16->SetSelected(CutFlow_ZHbb_tagFirst_16);
}
