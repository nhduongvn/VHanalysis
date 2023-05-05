#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_2b2c_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16_2b2c/pt_jet2_2016_QuadJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16_2b2c = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16_2b2c", "pt_jet2_2016_QuadJet_TripleTag_16_2b2c",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16_2b2c->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16_2b2c->Range(-100,-0.7867091,566.6667,4.070082);
   pt_jet2_2016_QuadJet_TripleTag_16_2b2c->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16_2b2c->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_2b2c->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16_2b2c->SetLogy();
   pt_jet2_2016_QuadJet_TripleTag_16_2b2c->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_pt_jet2__122 = new TH1D("_QuadJet_TripleTag_2b2c_pt_jet2__122","",50,0,500);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(5,117);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(6,1156);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(7,1991);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(8,2027);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(9,1742);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(10,1282);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(11,1032);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(12,785);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(13,580);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(14,452);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(15,338);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(16,245);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(17,190);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(18,133);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(19,108);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(20,85);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(21,63);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(22,49);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(23,47);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(24,25);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(25,17);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(26,17);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(27,14);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(28,13);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(29,11);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(30,6);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(31,8);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(32,10);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(33,5);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(34,4);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(35,4);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(36,4);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(37,2);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(39,1);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(41,1);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(42,1);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(43,1);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(44,1);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(45,2);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetBinContent(46,1);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetEntries(12570);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_2b2c_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12570  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  95.92");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  39.48");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_pt_jet2__122->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_pt_jet2__122);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_pt_jet2__122->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_2b2c_pt_jet2__122->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_pt_jet2__122->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet2__122->Draw("HIST");
   pt_jet2_2016_QuadJet_TripleTag_16_2b2c->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16_2b2c->cd();
   pt_jet2_2016_QuadJet_TripleTag_16_2b2c->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16_2b2c);
}
