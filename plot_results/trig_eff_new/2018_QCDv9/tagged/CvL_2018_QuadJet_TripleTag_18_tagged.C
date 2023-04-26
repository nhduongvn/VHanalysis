#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_tagged()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_tagged/CvL_2018_QuadJet_TripleTag_18_tagged
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_tagged = new TCanvas("CvL_2018_QuadJet_TripleTag_18_tagged", "CvL_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_tagged->Range(-0.2183529,0.1730383,1.171633,0.3267434);
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
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(1,0.3056639);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(2,0.1969201);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(3,0.2148139);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(4,0.218241);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(5,0.2330178);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(6,0.2303546);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(7,0.2346328);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(8,0.2336571);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(9,0.2367215);
   _QuadJet_TripleTag_tagged_CvL__97->SetBinContent(10,0.2511605);
   _QuadJet_TripleTag_tagged_CvL__97->SetEntries(2.355183);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4985");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2952");
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
