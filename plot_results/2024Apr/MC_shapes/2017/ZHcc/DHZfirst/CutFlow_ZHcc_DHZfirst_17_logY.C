#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHcc_DHZfirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_ZHcc_DHZfirst_17/CutFlow_ZHcc_DHZfirst_17
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHcc_DHZfirst_17 = new TCanvas("CutFlow_ZHcc_DHZfirst_17", "CutFlow_ZHcc_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHcc_DHZfirst_17->SetHighLightColor(2);
   CutFlow_ZHcc_DHZfirst_17->Range(-1.4,-0.929202,7.933333,3.604293);
   CutFlow_ZHcc_DHZfirst_17->SetFillColor(0);
   CutFlow_ZHcc_DHZfirst_17->SetFillStyle(4000);
   CutFlow_ZHcc_DHZfirst_17->SetBorderMode(0);
   CutFlow_ZHcc_DHZfirst_17->SetBorderSize(2);
   CutFlow_ZHcc_DHZfirst_17->SetLogy();
   CutFlow_ZHcc_DHZfirst_17->SetLeftMargin(0.15);
   CutFlow_ZHcc_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_ZHcc_DHZfirst_17->SetFrameBorderMode(0);
   CutFlow_ZHcc_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_ZHcc_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__62 = new TH1D("CutFlow_evt_DHZfirst__62","",8,0,8);
   CutFlow_evt_DHZfirst__62->SetBinContent(1,747.1275);
   CutFlow_evt_DHZfirst__62->SetBinContent(2,746.2666);
   CutFlow_evt_DHZfirst__62->SetBinContent(3,120.6981);
   CutFlow_evt_DHZfirst__62->SetBinContent(4,7.441002);
   CutFlow_evt_DHZfirst__62->SetBinContent(5,2.585782);
   CutFlow_evt_DHZfirst__62->SetBinContent(6,1.153621);
   CutFlow_evt_DHZfirst__62->SetBinContent(7,0.6686172);
   CutFlow_evt_DHZfirst__62->SetBinContent(8,0.3639805);
   CutFlow_evt_DHZfirst__62->SetBinError(1,0.9370403);
   CutFlow_evt_DHZfirst__62->SetBinError(2,0.936557);
   CutFlow_evt_DHZfirst__62->SetBinError(3,0.3457938);
   CutFlow_evt_DHZfirst__62->SetBinError(4,0.08318519);
   CutFlow_evt_DHZfirst__62->SetBinError(5,0.04922732);
   CutFlow_evt_DHZfirst__62->SetBinError(6,0.03323446);
   CutFlow_evt_DHZfirst__62->SetBinError(7,0.02553748);
   CutFlow_evt_DHZfirst__62->SetBinError(8,0.01902441);
   CutFlow_evt_DHZfirst__62->SetEntries(2271294);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__62->SetLineColor(ci);
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__62->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__62->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__62->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__62->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__62->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__62->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__62->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__62->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__62->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__62->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__62->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHcc_DHZfirst_17->Modified();
   CutFlow_ZHcc_DHZfirst_17->cd();
   CutFlow_ZHcc_DHZfirst_17->SetSelected(CutFlow_ZHcc_DHZfirst_17);
}
