#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_TT_DHZfirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_TT_DHZfirst_16/CutFlow_TT_DHZfirst_16
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_TT_DHZfirst_16 = new TCanvas("CutFlow_TT_DHZfirst_16", "CutFlow_TT_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_TT_DHZfirst_16->SetHighLightColor(2);
   CutFlow_TT_DHZfirst_16->Range(-1.4,4.225756,7.933333,8.145148);
   CutFlow_TT_DHZfirst_16->SetFillColor(0);
   CutFlow_TT_DHZfirst_16->SetFillStyle(4000);
   CutFlow_TT_DHZfirst_16->SetBorderMode(0);
   CutFlow_TT_DHZfirst_16->SetBorderSize(2);
   CutFlow_TT_DHZfirst_16->SetLogy();
   CutFlow_TT_DHZfirst_16->SetLeftMargin(0.15);
   CutFlow_TT_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_TT_DHZfirst_16->SetFrameBorderMode(0);
   CutFlow_TT_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_TT_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__76 = new TH1D("CutFlow_evt_DHZfirst__76","",8,0,8);
   CutFlow_evt_DHZfirst__76->SetBinContent(1,2.989923e+07);
   CutFlow_evt_DHZfirst__76->SetBinContent(2,2.843674e+07);
   CutFlow_evt_DHZfirst__76->SetBinContent(3,9067599);
   CutFlow_evt_DHZfirst__76->SetBinContent(4,3248067);
   CutFlow_evt_DHZfirst__76->SetBinContent(5,1198036);
   CutFlow_evt_DHZfirst__76->SetBinContent(6,245525.2);
   CutFlow_evt_DHZfirst__76->SetBinContent(7,82932.56);
   CutFlow_evt_DHZfirst__76->SetBinContent(8,27069.61);
   CutFlow_evt_DHZfirst__76->SetBinError(1,1377.314);
   CutFlow_evt_DHZfirst__76->SetBinError(2,1351.912);
   CutFlow_evt_DHZfirst__76->SetBinError(3,810.065);
   CutFlow_evt_DHZfirst__76->SetBinError(4,486.9372);
   CutFlow_evt_DHZfirst__76->SetBinError(5,293.6769);
   CutFlow_evt_DHZfirst__76->SetBinError(6,131.326);
   CutFlow_evt_DHZfirst__76->SetBinError(7,76.52302);
   CutFlow_evt_DHZfirst__76->SetBinError(8,43.81185);
   CutFlow_evt_DHZfirst__76->SetEntries(1.19427e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__76->SetLineColor(ci);
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__76->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__76->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__76->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__76->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__76->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__76->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__76->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__76->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__76->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__76->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__76->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_TT_DHZfirst_16->Modified();
   CutFlow_TT_DHZfirst_16->cd();
   CutFlow_TT_DHZfirst_16->SetSelected(CutFlow_TT_DHZfirst_16);
}
