#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WZ_DHZfirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_WZ_DHZfirst_16/CutFlow_WZ_DHZfirst_16
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WZ_DHZfirst_16 = new TCanvas("CutFlow_WZ_DHZfirst_16", "CutFlow_WZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WZ_DHZfirst_16->SetHighLightColor(2);
   CutFlow_WZ_DHZfirst_16->Range(-1.4,1.310593,7.933333,7.082383);
   CutFlow_WZ_DHZfirst_16->SetFillColor(0);
   CutFlow_WZ_DHZfirst_16->SetFillStyle(4000);
   CutFlow_WZ_DHZfirst_16->SetBorderMode(0);
   CutFlow_WZ_DHZfirst_16->SetBorderSize(2);
   CutFlow_WZ_DHZfirst_16->SetLogy();
   CutFlow_WZ_DHZfirst_16->SetLeftMargin(0.15);
   CutFlow_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_WZ_DHZfirst_16->SetFrameBorderMode(0);
   CutFlow_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_WZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__85 = new TH1D("CutFlow_evt_DHZfirst__85","",8,0,8);
   CutFlow_evt_DHZfirst__85->SetBinContent(1,1689100);
   CutFlow_evt_DHZfirst__85->SetBinContent(2,1651565);
   CutFlow_evt_DHZfirst__85->SetBinContent(3,42463.92);
   CutFlow_evt_DHZfirst__85->SetBinContent(4,5343.23);
   CutFlow_evt_DHZfirst__85->SetBinContent(5,1152.698);
   CutFlow_evt_DHZfirst__85->SetBinContent(6,386.9539);
   CutFlow_evt_DHZfirst__85->SetBinContent(7,154.455);
   CutFlow_evt_DHZfirst__85->SetBinContent(8,51.04962);
   CutFlow_evt_DHZfirst__85->SetBinError(1,428.783);
   CutFlow_evt_DHZfirst__85->SetBinError(2,423.992);
   CutFlow_evt_DHZfirst__85->SetBinError(3,67.98606);
   CutFlow_evt_DHZfirst__85->SetBinError(4,24.11636);
   CutFlow_evt_DHZfirst__85->SetBinError(5,11.20128);
   CutFlow_evt_DHZfirst__85->SetBinError(6,6.489922);
   CutFlow_evt_DHZfirst__85->SetBinError(7,4.100255);
   CutFlow_evt_DHZfirst__85->SetBinError(8,2.357252);
   CutFlow_evt_DHZfirst__85->SetEntries(3.11464e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__85->SetLineColor(ci);
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__85->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__85->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__85->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__85->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__85->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__85->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__85->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__85->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__85->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__85->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__85->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WZ_DHZfirst_16->Modified();
   CutFlow_WZ_DHZfirst_16->cd();
   CutFlow_WZ_DHZfirst_16->SetSelected(CutFlow_WZ_DHZfirst_16);
}
