#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHcc_DHZfirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_ZHcc_DHZfirst_16/CutFlow_ZHcc_DHZfirst_16
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHcc_DHZfirst_16 = new TCanvas("CutFlow_ZHcc_DHZfirst_16", "CutFlow_ZHcc_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHcc_DHZfirst_16->SetHighLightColor(2);
   CutFlow_ZHcc_DHZfirst_16->Range(-1.4,-0.5449669,7.933333,3.549797);
   CutFlow_ZHcc_DHZfirst_16->SetFillColor(0);
   CutFlow_ZHcc_DHZfirst_16->SetFillStyle(4000);
   CutFlow_ZHcc_DHZfirst_16->SetBorderMode(0);
   CutFlow_ZHcc_DHZfirst_16->SetBorderSize(2);
   CutFlow_ZHcc_DHZfirst_16->SetLogy();
   CutFlow_ZHcc_DHZfirst_16->SetLeftMargin(0.15);
   CutFlow_ZHcc_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_ZHcc_DHZfirst_16->SetFrameBorderMode(0);
   CutFlow_ZHcc_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_ZHcc_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__61 = new TH1D("CutFlow_evt_DHZfirst__61","",8,0,8);
   CutFlow_evt_DHZfirst__61->SetBinContent(1,729.0745);
   CutFlow_evt_DHZfirst__61->SetBinContent(2,728.4512);
   CutFlow_evt_DHZfirst__61->SetBinContent(3,116.7884);
   CutFlow_evt_DHZfirst__61->SetBinContent(4,28.28116);
   CutFlow_evt_DHZfirst__61->SetBinContent(5,6.883893);
   CutFlow_evt_DHZfirst__61->SetBinContent(6,2.502025);
   CutFlow_evt_DHZfirst__61->SetBinContent(7,1.463995);
   CutFlow_evt_DHZfirst__61->SetBinContent(8,0.7769942);
   CutFlow_evt_DHZfirst__61->SetBinError(1,1.294664);
   CutFlow_evt_DHZfirst__61->SetBinError(2,1.294157);
   CutFlow_evt_DHZfirst__61->SetBinError(3,0.4753212);
   CutFlow_evt_DHZfirst__61->SetBinError(4,0.2313271);
   CutFlow_evt_DHZfirst__61->SetBinError(5,0.1142061);
   CutFlow_evt_DHZfirst__61->SetBinError(6,0.06917628);
   CutFlow_evt_DHZfirst__61->SetBinError(7,0.05335312);
   CutFlow_evt_DHZfirst__61->SetBinError(8,0.03908208);
   CutFlow_evt_DHZfirst__61->SetEntries(1166636);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__61->SetLineColor(ci);
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__61->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__61->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__61->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__61->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__61->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__61->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__61->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__61->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__61->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__61->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__61->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHcc_DHZfirst_16->Modified();
   CutFlow_ZHcc_DHZfirst_16->cd();
   CutFlow_ZHcc_DHZfirst_16->SetSelected(CutFlow_ZHcc_DHZfirst_16);
}
