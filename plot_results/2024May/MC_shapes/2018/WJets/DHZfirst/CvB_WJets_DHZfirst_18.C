#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_WJets_DHZfirst_18()
{
//=========Macro generated from canvas: CvB_WJets_DHZfirst_18/CvB_WJets_DHZfirst_18
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvB_WJets_DHZfirst_18 = new TCanvas("CvB_WJets_DHZfirst_18", "CvB_WJets_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_WJets_DHZfirst_18->SetHighLightColor(2);
   CvB_WJets_DHZfirst_18->Range(-0.2,-1.900477e+07,1.133333,1.71043e+08);
   CvB_WJets_DHZfirst_18->SetFillColor(0);
   CvB_WJets_DHZfirst_18->SetFillStyle(4000);
   CvB_WJets_DHZfirst_18->SetBorderMode(0);
   CvB_WJets_DHZfirst_18->SetBorderSize(2);
   CvB_WJets_DHZfirst_18->SetLeftMargin(0.15);
   CvB_WJets_DHZfirst_18->SetFrameFillStyle(1000);
   CvB_WJets_DHZfirst_18->SetFrameBorderMode(0);
   CvB_WJets_DHZfirst_18->SetFrameFillStyle(1000);
   CvB_WJets_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__5982 = new TH1D("Jets_cut_CvB__5982","",20,0,1);
   Jets_cut_CvB__5982->SetBinContent(1,3324922);
   Jets_cut_CvB__5982->SetBinContent(2,996563.4);
   Jets_cut_CvB__5982->SetBinContent(3,933736.3);
   Jets_cut_CvB__5982->SetBinContent(4,1075913);
   Jets_cut_CvB__5982->SetBinContent(5,1321473);
   Jets_cut_CvB__5982->SetBinContent(6,1579115);
   Jets_cut_CvB__5982->SetBinContent(7,1980717);
   Jets_cut_CvB__5982->SetBinContent(8,2545282);
   Jets_cut_CvB__5982->SetBinContent(9,3286856);
   Jets_cut_CvB__5982->SetBinContent(10,4350156);
   Jets_cut_CvB__5982->SetBinContent(11,5705750);
   Jets_cut_CvB__5982->SetBinContent(12,7537389);
   Jets_cut_CvB__5982->SetBinContent(13,1.092093e+07);
   Jets_cut_CvB__5982->SetBinContent(14,1.603808e+07);
   Jets_cut_CvB__5982->SetBinContent(15,2.515269e+07);
   Jets_cut_CvB__5982->SetBinContent(16,3.968915e+07);
   Jets_cut_CvB__5982->SetBinContent(17,7.000802e+07);
   Jets_cut_CvB__5982->SetBinContent(18,1.375453e+08);
   Jets_cut_CvB__5982->SetBinContent(19,1.447983e+08);
   Jets_cut_CvB__5982->SetBinContent(20,2.658819e+07);
   Jets_cut_CvB__5982->SetBinError(1,4820.533);
   Jets_cut_CvB__5982->SetBinError(2,2803.622);
   Jets_cut_CvB__5982->SetBinError(3,2684.439);
   Jets_cut_CvB__5982->SetBinError(4,2957.369);
   Jets_cut_CvB__5982->SetBinError(5,3469.226);
   Jets_cut_CvB__5982->SetBinError(6,3771.129);
   Jets_cut_CvB__5982->SetBinError(7,4335.233);
   Jets_cut_CvB__5982->SetBinError(8,5029.025);
   Jets_cut_CvB__5982->SetBinError(9,5582.388);
   Jets_cut_CvB__5982->SetBinError(10,6332.526);
   Jets_cut_CvB__5982->SetBinError(11,7195.001);
   Jets_cut_CvB__5982->SetBinError(12,8189.185);
   Jets_cut_CvB__5982->SetBinError(13,9724.632);
   Jets_cut_CvB__5982->SetBinError(14,11682.55);
   Jets_cut_CvB__5982->SetBinError(15,14474.79);
   Jets_cut_CvB__5982->SetBinError(16,17893.17);
   Jets_cut_CvB__5982->SetBinError(17,23443.77);
   Jets_cut_CvB__5982->SetBinError(18,32774.98);
   Jets_cut_CvB__5982->SetBinError(19,35023.03);
   Jets_cut_CvB__5982->SetBinError(20,15501.79);
   Jets_cut_CvB__5982->SetEntries(4.144857e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__5982->SetLineColor(ci);
   Jets_cut_CvB__5982->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__5982->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__5982->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__5982->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5982->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__5982->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__5982->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__5982->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__5982->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__5982->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__5982->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__5982->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__5982->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5982->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__5982->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_WJets_DHZfirst_18->Modified();
   CvB_WJets_DHZfirst_18->cd();
   CvB_WJets_DHZfirst_18->SetSelected(CvB_WJets_DHZfirst_18);
}
