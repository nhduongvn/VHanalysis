#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_tagged()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_tagged/CvL_2018_QuadJet_TripleTag_18_tagged
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_tagged = new TCanvas("CvL_2018_QuadJet_TripleTag_18_tagged", "CvL_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_tagged->Range(-0.2183529,0.4840589,1.171633,0.7846902);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetFillStyle(4000);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetLeftMargin(0.15709);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetRightMargin(0.1234783);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetBottomMargin(0.12);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvL__97 = new TH1D("_QuadJet_TripleTag_tagged_CvL__97","",10,0,1);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(1,0.7434608);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(2,0.7347826);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(3,0.5307692);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(4,0.5470297);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(5,0.5618221);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(6,0.579798);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(7,0.5707071);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(8,0.6015326);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(9,0.6330579);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(10,0.6287906);
   _QuadJet_TripleTag_tagged_CvL__97->SetEntries(6.131751);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 6      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4894");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2977");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvL__97->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvL__97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_CvL__97->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvL__97->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_tagged_CvL__97->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_tagged_CvL__97->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__97->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__97->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__97->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_CvL__97->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__97->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__97->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__97->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__97->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__97->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18_tagged->Modified();
   CvL_2018_QuadJet_TripleTag_18_tagged->cd();
   CvL_2018_QuadJet_TripleTag_18_tagged->SetSelected(CvL_2018_QuadJet_TripleTag_18_tagged);
}
