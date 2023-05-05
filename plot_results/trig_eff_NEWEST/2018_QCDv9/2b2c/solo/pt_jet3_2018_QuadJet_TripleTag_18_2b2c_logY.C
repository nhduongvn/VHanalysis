#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_2b2c_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_2b2c/pt_jet3_2018_QuadJet_TripleTag_18_2b2c
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_2b2c = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_2b2c", "pt_jet3_2018_QuadJet_TripleTag_18_2b2c",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->Range(-100,-0.803858,566.6667,4.224422);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_pt_jet3__65 = new TH1D("_QuadJet_TripleTag_2b2c_pt_jet3__65","",50,0,500);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(5,812);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(6,2630);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(7,2780);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(8,2317);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(9,1491);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(10,1002);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(11,682);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(12,419);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(13,300);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(14,208);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(15,118);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(16,105);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(17,53);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(18,40);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(19,24);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(20,24);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(21,21);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(22,4);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(23,5);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(24,5);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(25,3);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(26,3);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(27,2);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(28,4);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(29,1);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(32,1);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(33,1);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(34,1);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetBinContent(35,1);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetEntries(13057);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 13057  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  77.64");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  26.61");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_pt_jet3__65->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_pt_jet3__65);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_pt_jet3__65->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_2b2c_pt_jet3__65->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_pt_jet3__65->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3__65->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_2b2c);
}
