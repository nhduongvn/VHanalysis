#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHbb_tagOnly_17_logY()
{
//=========Macro generated from canvas: CutFlow_ZHbb_tagOnly_17/CutFlow_ZHbb_tagOnly_17
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHbb_tagOnly_17 = new TCanvas("CutFlow_ZHbb_tagOnly_17", "CutFlow_ZHbb_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHbb_tagOnly_17->SetHighLightColor(2);
   CutFlow_ZHbb_tagOnly_17->Range(-1.4,1.74462,7.933333,4.75602);
   CutFlow_ZHbb_tagOnly_17->SetFillColor(0);
   CutFlow_ZHbb_tagOnly_17->SetFillStyle(4000);
   CutFlow_ZHbb_tagOnly_17->SetBorderMode(0);
   CutFlow_ZHbb_tagOnly_17->SetBorderSize(2);
   CutFlow_ZHbb_tagOnly_17->SetLogy();
   CutFlow_ZHbb_tagOnly_17->SetLeftMargin(0.15);
   CutFlow_ZHbb_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_ZHbb_tagOnly_17->SetFrameBorderMode(0);
   CutFlow_ZHbb_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_ZHbb_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__35 = new TH1D("CutFlow_evt_tagOnly__35","",8,0,8);
   CutFlow_evt_tagOnly__35->SetBinContent(1,15042.88);
   CutFlow_evt_tagOnly__35->SetBinContent(2,15011.91);
   CutFlow_evt_tagOnly__35->SetBinContent(3,2263.317);
   CutFlow_evt_tagOnly__35->SetBinContent(4,506.4398);
   CutFlow_evt_tagOnly__35->SetBinContent(5,492.4258);
   CutFlow_evt_tagOnly__35->SetBinContent(6,389.4511);
   CutFlow_evt_tagOnly__35->SetBinContent(7,222.2235);
   CutFlow_evt_tagOnly__35->SetBinContent(8,93.22911);
   CutFlow_evt_tagOnly__35->SetBinError(1,4.293299);
   CutFlow_evt_tagOnly__35->SetBinError(2,4.289379);
   CutFlow_evt_tagOnly__35->SetBinError(3,1.544802);
   CutFlow_evt_tagOnly__35->SetBinError(4,0.6323773);
   CutFlow_evt_tagOnly__35->SetBinError(5,0.6264361);
   CutFlow_evt_tagOnly__35->SetBinError(6,0.574364);
   CutFlow_evt_tagOnly__35->SetBinError(7,0.4300619);
   CutFlow_evt_tagOnly__35->SetBinError(8,0.2844182);
   CutFlow_evt_tagOnly__35->SetEntries(3.545581e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__35->SetLineColor(ci);
   CutFlow_evt_tagOnly__35->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__35->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__35->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__35->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__35->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__35->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__35->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__35->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__35->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__35->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__35->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__35->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__35->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__35->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__35->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__35->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__35->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__35->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__35->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__35->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__35->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__35->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__35->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHbb_tagOnly_17->Modified();
   CutFlow_ZHbb_tagOnly_17->cd();
   CutFlow_ZHbb_tagOnly_17->SetSelected(CutFlow_ZHbb_tagOnly_17);
}
