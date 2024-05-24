#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_tagFirst_18()
{
//=========Macro generated from canvas: CvB_tagFirst_18/CvB_tagFirst_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *CvB_tagFirst_18 = new TCanvas("CvB_tagFirst_18", "CvB_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_tagFirst_18->SetHighLightColor(2);
   CvB_tagFirst_18->Range(-0.2,-68.84567,1.133333,619.611);
   CvB_tagFirst_18->SetFillColor(0);
   CvB_tagFirst_18->SetFillStyle(4000);
   CvB_tagFirst_18->SetBorderMode(0);
   CvB_tagFirst_18->SetBorderSize(2);
   CvB_tagFirst_18->SetLeftMargin(0.15);
   CvB_tagFirst_18->SetFrameFillStyle(1000);
   CvB_tagFirst_18->SetFrameBorderMode(0);
   CvB_tagFirst_18->SetFrameFillStyle(1000);
   CvB_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__124 = new TH1D("Jets_cut_CvB__124","",20,0,1);
   Jets_cut_CvB__124->SetBinContent(1,91.15641);
   Jets_cut_CvB__124->SetBinContent(2,18.14265);
   Jets_cut_CvB__124->SetBinContent(3,14.1264);
   Jets_cut_CvB__124->SetBinContent(4,14.86823);
   Jets_cut_CvB__124->SetBinContent(5,16.1653);
   Jets_cut_CvB__124->SetBinContent(6,17.82912);
   Jets_cut_CvB__124->SetBinContent(7,19.41642);
   Jets_cut_CvB__124->SetBinContent(8,22.25076);
   Jets_cut_CvB__124->SetBinContent(9,27.34226);
   Jets_cut_CvB__124->SetBinContent(10,33.52085);
   Jets_cut_CvB__124->SetBinContent(11,39.87009);
   Jets_cut_CvB__124->SetBinContent(12,49.45045);
   Jets_cut_CvB__124->SetBinContent(13,66.65303);
   Jets_cut_CvB__124->SetBinContent(14,89.01939);
   Jets_cut_CvB__124->SetBinContent(15,122.6643);
   Jets_cut_CvB__124->SetBinContent(16,177.0283);
   Jets_cut_CvB__124->SetBinContent(17,274.4858);
   Jets_cut_CvB__124->SetBinContent(18,464.5586);
   Jets_cut_CvB__124->SetBinContent(19,524.5384);
   Jets_cut_CvB__124->SetBinContent(20,114.4691);
   Jets_cut_CvB__124->SetBinError(1,0.5221605);
   Jets_cut_CvB__124->SetBinError(2,0.2224502);
   Jets_cut_CvB__124->SetBinError(3,0.1936315);
   Jets_cut_CvB__124->SetBinError(4,0.2009034);
   Jets_cut_CvB__124->SetBinError(5,0.2062038);
   Jets_cut_CvB__124->SetBinError(6,0.2274413);
   Jets_cut_CvB__124->SetBinError(7,0.2305011);
   Jets_cut_CvB__124->SetBinError(8,0.2507412);
   Jets_cut_CvB__124->SetBinError(9,0.282168);
   Jets_cut_CvB__124->SetBinError(10,0.3194129);
   Jets_cut_CvB__124->SetBinError(11,0.3358024);
   Jets_cut_CvB__124->SetBinError(12,0.3895209);
   Jets_cut_CvB__124->SetBinError(13,0.4397744);
   Jets_cut_CvB__124->SetBinError(14,0.5310628);
   Jets_cut_CvB__124->SetBinError(15,0.6037663);
   Jets_cut_CvB__124->SetBinError(16,0.7310269);
   Jets_cut_CvB__124->SetBinError(17,0.8955189);
   Jets_cut_CvB__124->SetBinError(18,1.190497);
   Jets_cut_CvB__124->SetBinError(19,1.256953);
   Jets_cut_CvB__124->SetBinError(20,0.5947096);
   Jets_cut_CvB__124->SetEntries(1024254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__124->SetLineColor(ci);
   Jets_cut_CvB__124->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__124->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__124->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__124->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__124->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__124->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__124->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__124->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__124->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__124->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__124->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__124->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__124->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__124->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__124->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_tagFirst_18->Modified();
   CvB_tagFirst_18->cd();
   CvB_tagFirst_18->SetSelected(CvB_tagFirst_18);
}
