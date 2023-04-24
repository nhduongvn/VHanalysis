#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_DoubleTag_16/pt_jet1_2016_DoubleJet_DoubleTag_16
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet1_2016_DoubleJet_DoubleTag_16", "pt_jet1_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16->Range(-100,-0.7198008,566.6667,3.467907);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetLogy();
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_pt_jet1__35 = new TH1D("_DoubleJet_DoubleTag_pt_jet1__35","",50,0,500);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(6,1);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(7,12);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(8,51);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(9,172);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(10,415);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(11,591);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(12,498);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(13,429);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(14,299);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(15,284);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(16,202);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(17,192);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(18,128);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(19,122);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(20,111);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(21,82);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(22,81);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(23,76);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(24,35);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(25,46);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(26,28);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(27,27);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(28,28);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(29,21);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(30,13);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(31,8);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(32,15);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(33,10);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(34,7);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(35,8);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(36,5);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(37,2);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(38,8);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(39,8);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(40,4);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(41,4);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(42,1);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(43,1);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(44,1);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(45,2);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(46,4);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(47,2);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(48,2);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(49,1);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(50,1);
   _DoubleJet_DoubleTag_pt_jet1__35->SetBinContent(51,19);
   _DoubleJet_DoubleTag_pt_jet1__35->SetEntries(4057);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4057   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  143.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   56.2");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_pt_jet1__35->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_pt_jet1__35);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_pt_jet1__35->SetLineColor(ci);
   _DoubleJet_DoubleTag_pt_jet1__35->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_pt_jet1__35->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_pt_jet1__35->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet1__35->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet1__35->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet1__35->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_pt_jet1__35->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet1__35->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet1__35->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet1__35->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet1__35->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet1__35->Draw("HIST");
   pt_jet1_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet1_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet1_2016_DoubleJet_DoubleTag_16);
}
