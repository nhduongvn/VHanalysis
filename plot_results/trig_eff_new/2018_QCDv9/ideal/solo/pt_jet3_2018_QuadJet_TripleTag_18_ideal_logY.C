#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_ideal/pt_jet3_2018_QuadJet_TripleTag_18_ideal
//=========  (Thu Apr 27 10:18:11 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_ideal", "pt_jet3_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->Range(-100,-0.8001823,566.6667,4.19134);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3__128 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3__128","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(5,780);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(6,2474);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(7,2598);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(8,2151);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(9,1417);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(10,955);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(11,640);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(12,401);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(13,285);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(14,199);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(15,111);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(16,99);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(17,49);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(18,38);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(19,24);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(20,25);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(21,23);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(22,4);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(23,5);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(24,5);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(25,2);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(26,3);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(27,2);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(28,4);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(32,1);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(34,1);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetEntries(12299);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12299  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  77.76");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  26.86");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3__128);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__128->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_ideal);
}
