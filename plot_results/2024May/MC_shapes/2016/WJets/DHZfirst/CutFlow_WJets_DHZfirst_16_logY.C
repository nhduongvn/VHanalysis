#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WJets_DHZfirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_WJets_DHZfirst_16/CutFlow_WJets_DHZfirst_16
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WJets_DHZfirst_16 = new TCanvas("CutFlow_WJets_DHZfirst_16", "CutFlow_WJets_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WJets_DHZfirst_16->SetHighLightColor(2);
   CutFlow_WJets_DHZfirst_16->Range(-1.4,2.65297,7.933333,9.15299);
   CutFlow_WJets_DHZfirst_16->SetFillColor(0);
   CutFlow_WJets_DHZfirst_16->SetFillStyle(4000);
   CutFlow_WJets_DHZfirst_16->SetBorderMode(0);
   CutFlow_WJets_DHZfirst_16->SetBorderSize(2);
   CutFlow_WJets_DHZfirst_16->SetLogy();
   CutFlow_WJets_DHZfirst_16->SetLeftMargin(0.15);
   CutFlow_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_WJets_DHZfirst_16->SetFrameBorderMode(0);
   CutFlow_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_WJets_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__70 = new TH1D("CutFlow_evt_DHZfirst__70","",8,0,8);
   CutFlow_evt_DHZfirst__70->SetBinContent(1,1.680501e+08);
   CutFlow_evt_DHZfirst__70->SetBinContent(2,1.641392e+08);
   CutFlow_evt_DHZfirst__70->SetBinContent(3,8804355);
   CutFlow_evt_DHZfirst__70->SetBinContent(4,774687.3);
   CutFlow_evt_DHZfirst__70->SetBinContent(5,76269.14);
   CutFlow_evt_DHZfirst__70->SetBinContent(6,10166.31);
   CutFlow_evt_DHZfirst__70->SetBinContent(7,4017.931);
   CutFlow_evt_DHZfirst__70->SetBinContent(8,1383.343);
   CutFlow_evt_DHZfirst__70->SetBinError(1,25122.01);
   CutFlow_evt_DHZfirst__70->SetBinError(2,25063.56);
   CutFlow_evt_DHZfirst__70->SetBinError(3,5027.046);
   CutFlow_evt_DHZfirst__70->SetBinError(4,1296.475);
   CutFlow_evt_DHZfirst__70->SetBinError(5,385.4591);
   CutFlow_evt_DHZfirst__70->SetBinError(6,136.2174);
   CutFlow_evt_DHZfirst__70->SetBinError(7,80.4779);
   CutFlow_evt_DHZfirst__70->SetBinError(8,49.9222);
   CutFlow_evt_DHZfirst__70->SetEntries(3.160981e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__70->SetLineColor(ci);
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__70->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__70->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__70->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__70->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__70->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__70->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__70->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__70->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__70->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__70->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__70->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WJets_DHZfirst_16->Modified();
   CutFlow_WJets_DHZfirst_16->cd();
   CutFlow_WJets_DHZfirst_16->SetSelected(CutFlow_WJets_DHZfirst_16);
}
