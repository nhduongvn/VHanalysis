#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_SingleTop_DHZfirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_SingleTop_DHZfirst_16/CutFlow_SingleTop_DHZfirst_16
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_SingleTop_DHZfirst_16 = new TCanvas("CutFlow_SingleTop_DHZfirst_16", "CutFlow_SingleTop_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_SingleTop_DHZfirst_16->SetHighLightColor(2);
   CutFlow_SingleTop_DHZfirst_16->Range(-1.4,3.143498,7.933333,7.753595);
   CutFlow_SingleTop_DHZfirst_16->SetFillColor(0);
   CutFlow_SingleTop_DHZfirst_16->SetFillStyle(4000);
   CutFlow_SingleTop_DHZfirst_16->SetBorderMode(0);
   CutFlow_SingleTop_DHZfirst_16->SetBorderSize(2);
   CutFlow_SingleTop_DHZfirst_16->SetLogy();
   CutFlow_SingleTop_DHZfirst_16->SetLeftMargin(0.15);
   CutFlow_SingleTop_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_SingleTop_DHZfirst_16->SetFrameBorderMode(0);
   CutFlow_SingleTop_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_SingleTop_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__79 = new TH1D("CutFlow_evt_DHZfirst__79","",8,0,8);
   CutFlow_evt_DHZfirst__79->SetBinContent(1,1.035228e+07);
   CutFlow_evt_DHZfirst__79->SetBinContent(2,1.014654e+07);
   CutFlow_evt_DHZfirst__79->SetBinContent(3,873098.9);
   CutFlow_evt_DHZfirst__79->SetBinContent(4,250500);
   CutFlow_evt_DHZfirst__79->SetBinContent(5,89434.07);
   CutFlow_evt_DHZfirst__79->SetBinContent(6,21155.44);
   CutFlow_evt_DHZfirst__79->SetBinContent(7,8045.209);
   CutFlow_evt_DHZfirst__79->SetBinContent(8,2713.346);
   CutFlow_evt_DHZfirst__79->SetBinError(1,1012.091);
   CutFlow_evt_DHZfirst__79->SetBinError(2,995.3016);
   CutFlow_evt_DHZfirst__79->SetBinError(3,369.0332);
   CutFlow_evt_DHZfirst__79->SetBinError(4,194.3978);
   CutFlow_evt_DHZfirst__79->SetBinError(5,113.8519);
   CutFlow_evt_DHZfirst__79->SetBinError(6,54.32931);
   CutFlow_evt_DHZfirst__79->SetBinError(7,33.62871);
   CutFlow_evt_DHZfirst__79->SetBinError(8,19.70273);
   CutFlow_evt_DHZfirst__79->SetEntries(3.922839e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__79->SetLineColor(ci);
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__79->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__79->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__79->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__79->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__79->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__79->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__79->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__79->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__79->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__79->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__79->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_SingleTop_DHZfirst_16->Modified();
   CutFlow_SingleTop_DHZfirst_16->cd();
   CutFlow_SingleTop_DHZfirst_16->SetSelected(CutFlow_SingleTop_DHZfirst_16);
}
