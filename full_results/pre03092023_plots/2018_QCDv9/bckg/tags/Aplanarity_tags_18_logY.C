#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Feb 16 10:37:38 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2183529,-1.042226,1.171633,10.25458);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15709);
   Aplanarity_tags_18->SetRightMargin(0.1234783);
   Aplanarity_tags_18->SetBottomMargin(0.12);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.240855e+08);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(2.05774);
   st_stack_63->SetMaximum(1.333211e+09);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("Aplanarity");
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Events/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,4791190);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,2234427);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,1244533);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,608363.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,346754.9);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,230889.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,194551.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,105825.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,69170.81);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,45681.24);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,30935.89);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,51888.82);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,18528.98);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,8808.25);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,9861.545);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,2064.442);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,1200.92);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,1069.677);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,1186.573);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,22.25613);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,41.29715);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,100290.3);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,75676.69);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,70021.45);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,36962.56);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,15652.07);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,14057.83);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,34654.41);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,10461.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,7502.91);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,7269.503);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,5318.681);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,24722.71);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,4816.893);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,2785.825);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,3605.255);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,730.7612);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,596.6775);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,556.1686);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,701.9593);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,16.71884);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,41.29715);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(256755);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(0,0.1935244);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,449664.5);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,326676.7);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,220034.6);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,151316.7);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,106398.7);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,76052.37);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,54996.96);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,39927.84);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,29030.99);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,20934.8);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,15133.51);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,10697.81);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,7552.555);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,5177.358);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,3510.044);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,2281.927);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,1439.263);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,837.9041);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,467.6798);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,235.9902);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,102.0228);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,37.68494);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(23,9.823904);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(24,1.266814);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(25,0.05997242);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(0,0.1176549);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,204.5305);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,172.9243);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,142.2676);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,117.9466);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,99.19031);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,83.78357);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,71.78557);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,60.25044);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,51.56614);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,43.44863);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,37.53168);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,30.79676);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,26.65085);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,22.39209);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,18.89209);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,14.64215);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,11.91395);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,8.586023);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,7.104017);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,4.734709);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,2.989658);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,1.760971);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(23,0.9176357);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(24,0.3132017);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(25,0.05997242);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(2.03525e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
