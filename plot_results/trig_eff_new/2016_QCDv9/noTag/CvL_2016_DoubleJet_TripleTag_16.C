#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16/CvL_2016_DoubleJet_TripleTag_16
//=========  (Tue Apr 25 23:03:07 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16 = new TCanvas("CvL_2016_DoubleJet_TripleTag_16", "CvL_2016_DoubleJet_TripleTag_16",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16->Range(-0.2183529,0.04478241,1.171633,0.1760751);
   CvL_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16->SetFillStyle(4000);
   CvL_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15709);
   CvL_2016_DoubleJet_TripleTag_16->SetRightMargin(0.1234783);
   CvL_2016_DoubleJet_TripleTag_16->SetBottomMargin(0.12);
   CvL_2016_DoubleJet_TripleTag_16->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_CvL__91 = new TH1D("_DoubleJet_TripleTag_CvL__91","",10,0,1);
   _DoubleJet_TripleTag_CvL__91->SetBinContent(1,0.0651819);
   _DoubleJet_TripleTag_CvL__91->SetBinContent(2,0.08985221);
   _DoubleJet_TripleTag_CvL__91->SetBinContent(3,0.1083256);
   _DoubleJet_TripleTag_CvL__91->SetBinContent(4,0.119702);
   _DoubleJet_TripleTag_CvL__91->SetBinContent(5,0.1277038);
   _DoubleJet_TripleTag_CvL__91->SetBinContent(6,0.1338438);
   _DoubleJet_TripleTag_CvL__91->SetBinContent(7,0.138822);
   _DoubleJet_TripleTag_CvL__91->SetBinContent(8,0.1451704);
   _DoubleJet_TripleTag_CvL__91->SetBinContent(9,0.151159);
   _DoubleJet_TripleTag_CvL__91->SetBinContent(10,0.1580692);
   _DoubleJet_TripleTag_CvL__91->SetEntries(1.23783);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5611");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2733");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_CvL__91->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_CvL__91);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_CvL__91->SetLineColor(ci);
   _DoubleJet_TripleTag_CvL__91->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_CvL__91->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_CvL__91->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvL__91->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvL__91->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvL__91->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_CvL__91->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvL__91->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvL__91->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvL__91->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvL__91->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvL__91->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16->Modified();
   CvL_2016_DoubleJet_TripleTag_16->cd();
   CvL_2016_DoubleJet_TripleTag_16->SetSelected(CvL_2016_DoubleJet_TripleTag_16);
}
