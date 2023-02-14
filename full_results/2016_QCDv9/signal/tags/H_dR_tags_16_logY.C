#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Tue Feb 14 10:43:06 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.353788,0.6143869,7.264125,2.301038);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetFillStyle(4000);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLogy();
   H_dR_tags_16->SetLeftMargin(0.15709);
   H_dR_tags_16->SetRightMargin(0.1234783);
   H_dR_tags_16->SetBottomMargin(0.12);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(112.1024);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(6.558205);
   st_stack_21->SetMaximum(135.6353);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_21->GetXaxis()->SetRange(1,31);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetTitleOffset(1);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.2237414);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.3900971);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,0.519092);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,0.689081);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,0.7389031);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,0.8056812);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,0.8545278);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,0.8111779);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,0.7857163);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,0.7220475);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,0.8193201);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,0.7571984);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,0.8869565);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,0.8885424);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.3509829);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.204587);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.09098446);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.07553294);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.04634161);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.03142364);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.02344554);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,0.005779801);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.005858411);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,0.002891781);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,0.002700465);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.02576679);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.03404669);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.03899061);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.04553932);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.0470172);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.04933557);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.05082365);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.04986592);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.04840693);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.04621418);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.05016607);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.04711186);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.05176499);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.05136792);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.03250999);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.02447204);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.01599092);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.01474109);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.01160623);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.009497986);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.008269593);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,0.004087632);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.004143026);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,0.002891781);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,0.002700465);
   VbbHcc_tags_H_dR_stack_1->SetEntries(3765);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.06253303);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.1247643);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.1884768);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.259525);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.3199784);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.2990911);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.2664963);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.2400484);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.1997946);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.2092718);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.2044868);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.2044688);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.2242919);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.2235361);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.1096018);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.07066337);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.05335839);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.03365866);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.02720998);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.01146835);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.008986999);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.005523427);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.004441235);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.002207068);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,0.0007055996);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,0.0006533194);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.004850379);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.006900607);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.008474906);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.009975111);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.01107044);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.01071017);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.01012227);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.009608127);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.008752354);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.008939211);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.008847619);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.008830675);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.009267559);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.00920721);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.00646182);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.005200035);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.004506304);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.003547555);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.003218711);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.002049611);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.001836166);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.001395718);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.001288035);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.0009023189);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.0004989767);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,0.0004620019);
   VbbHcc_tags_H_dR_stack_2->SetEntries(8944);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
