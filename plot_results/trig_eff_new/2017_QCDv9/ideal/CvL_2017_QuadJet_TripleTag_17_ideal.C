#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_TripleTag_17_ideal()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_TripleTag_17_ideal/CvL_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue Apr 25 23:02:19 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_TripleTag_17_ideal = new TCanvas("CvL_2017_QuadJet_TripleTag_17_ideal", "CvL_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   CvL_2017_QuadJet_TripleTag_17_ideal->Range(-0.2183529,0.1242517,1.171633,0.2212954);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetFillStyle(4000);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15709);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetRightMargin(0.1234783);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetBottomMargin(0.12);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL__151 = new TH1D("_QuadJet_TripleTag_ideal_CvL__151","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL__151->SetBinContent(1,0.2032066);
   _QuadJet_TripleTag_ideal_CvL__151->SetBinContent(2,0.1393297);
   _QuadJet_TripleTag_ideal_CvL__151->SetBinContent(3,0.1532572);
   _QuadJet_TripleTag_ideal_CvL__151->SetBinContent(4,0.1569702);
   _QuadJet_TripleTag_ideal_CvL__151->SetBinContent(5,0.1478972);
   _QuadJet_TripleTag_ideal_CvL__151->SetBinContent(6,0.1508669);
   _QuadJet_TripleTag_ideal_CvL__151->SetBinContent(7,0.167364);
   _QuadJet_TripleTag_ideal_CvL__151->SetBinContent(8,0.1704649);
   _QuadJet_TripleTag_ideal_CvL__151->SetBinContent(9,0.186926);
   _QuadJet_TripleTag_ideal_CvL__151->SetBinContent(10,0.2079865);
   _QuadJet_TripleTag_ideal_CvL__151->SetEntries(1.684269);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5147");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2996");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL__151->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL__151);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_CvL__151->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL__151->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL__151->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_CvL__151->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__151->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__151->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__151->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_CvL__151->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__151->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__151->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__151->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__151->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__151->Draw("HIST");
   CvL_2017_QuadJet_TripleTag_17_ideal->Modified();
   CvL_2017_QuadJet_TripleTag_17_ideal->cd();
   CvL_2017_QuadJet_TripleTag_17_ideal->SetSelected(CvL_2017_QuadJet_TripleTag_17_ideal);
}
