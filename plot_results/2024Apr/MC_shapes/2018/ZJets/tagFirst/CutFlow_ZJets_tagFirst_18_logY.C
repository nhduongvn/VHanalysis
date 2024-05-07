#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZJets_tagFirst_18_logY()
{
//=========Macro generated from canvas: CutFlow_ZJets_tagFirst_18/CutFlow_ZJets_tagFirst_18
//=========  (Mon Apr 22 15:12:11 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZJets_tagFirst_18 = new TCanvas("CutFlow_ZJets_tagFirst_18", "CutFlow_ZJets_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZJets_tagFirst_18->SetHighLightColor(2);
   CutFlow_ZJets_tagFirst_18->Range(-1.2,3.335522,6.8,8.648009);
   CutFlow_ZJets_tagFirst_18->SetFillColor(0);
   CutFlow_ZJets_tagFirst_18->SetFillStyle(4000);
   CutFlow_ZJets_tagFirst_18->SetBorderMode(0);
   CutFlow_ZJets_tagFirst_18->SetBorderSize(2);
   CutFlow_ZJets_tagFirst_18->SetLogy();
   CutFlow_ZJets_tagFirst_18->SetLeftMargin(0.15);
   CutFlow_ZJets_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_ZJets_tagFirst_18->SetFrameBorderMode(0);
   CutFlow_ZJets_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_ZJets_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__15 = new TH1D("CutFlow_evt_tagFirst__15","",5,0,5);
   CutFlow_evt_tagFirst__15->SetBinContent(1,6.90576e+07);
   CutFlow_evt_tagFirst__15->SetBinContent(2,6.900855e+07);
   CutFlow_evt_tagFirst__15->SetBinContent(3,5160399);
   CutFlow_evt_tagFirst__15->SetBinContent(4,80414.17);
   CutFlow_evt_tagFirst__15->SetBinContent(5,14716.37);
   CutFlow_evt_tagFirst__15->SetBinError(1,15617.72);
   CutFlow_evt_tagFirst__15->SetBinError(2,15616.22);
   CutFlow_evt_tagFirst__15->SetBinError(3,3038.056);
   CutFlow_evt_tagFirst__15->SetBinError(4,201.0046);
   CutFlow_evt_tagFirst__15->SetBinError(5,78.88609);
   CutFlow_evt_tagFirst__15->SetEntries(1.162245e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__15->SetLineColor(ci);
   CutFlow_evt_tagFirst__15->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__15->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__15->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__15->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__15->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__15->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__15->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__15->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__15->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__15->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__15->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__15->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__15->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__15->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__15->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__15->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__15->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__15->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__15->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__15->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZJets_tagFirst_18->Modified();
   CutFlow_ZJets_tagFirst_18->cd();
   CutFlow_ZJets_tagFirst_18->SetSelected(CutFlow_ZJets_tagFirst_18);
}
