#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_2b2c_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_2b2c/pt_jet3_2016_QuadJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_2b2c = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_2b2c", "pt_jet3_2016_QuadJet_TripleTag_16_2b2c",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c->Range(-100,-0.8120699,566.6667,4.298329);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c->SetLogy();
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_pt_jet3__128 = new TH1D("_QuadJet_TripleTag_2b2c_pt_jet3__128","",50,0,500);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(5,1291);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(6,3234);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(7,2656);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(8,1893);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(9,1139);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(10,775);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(11,530);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(12,367);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(13,216);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(14,165);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(15,85);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(16,54);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(17,42);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(18,34);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(19,25);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(20,17);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(21,11);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(22,6);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(23,8);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(24,2);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(25,2);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(26,4);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(27,5);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(28,2);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(29,1);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(30,4);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(32,1);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetBinContent(33,1);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetEntries(12570);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_2b2c_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12570  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  73.35");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  25.97");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_pt_jet3__128->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_pt_jet3__128);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_pt_jet3__128->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_2b2c_pt_jet3__128->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_pt_jet3__128->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__128->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_2b2c->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_2b2c);
}
