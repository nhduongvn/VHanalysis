#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_16_logY()
{
//=========Macro generated from canvas: CvB_jets_all_16/CvB_jets_all_16
//=========  (Mon Dec 19 11:02:05 2022) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_16 = new TCanvas("CvB_jets_all_16", "CvB_jets_all_16",0,0,600,600);
   CvB_jets_all_16->SetHighLightColor(2);
   CvB_jets_all_16->Range(-0.2183529,4.932996,1.171633,15.30059);
   CvB_jets_all_16->SetFillColor(0);
   CvB_jets_all_16->SetFillStyle(4000);
   CvB_jets_all_16->SetBorderMode(0);
   CvB_jets_all_16->SetBorderSize(2);
   CvB_jets_all_16->SetLogy();
   CvB_jets_all_16->SetLeftMargin(0.15709);
   CvB_jets_all_16->SetRightMargin(0.1234783);
   CvB_jets_all_16->SetBottomMargin(0.12);
   CvB_jets_all_16->SetFrameFillStyle(1000);
   CvB_jets_all_16->SetFrameBorderMode(0);
   CvB_jets_all_16->SetFrameFillStyle(1000);
   CvB_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(6802754);
   st->SetMaximum(7.617987e+13);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",20,0,1);
   st_stack_117->SetMinimum(1503511);
   st_stack_117->SetMaximum(1.835806e+14);
   st_stack_117->SetDirectory(0);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_117->GetXaxis()->SetRange(1,20);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetTitleOffset(1);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Events/0.05");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetTitleSize(0.037);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetTitleOffset(1);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,2.517559e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,7.643793e+09);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,6.800035e+09);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,7.95984e+09);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,1.100236e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,1.637184e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,2.474225e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,3.722832e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,5.787846e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,1.036264e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,2.18442e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,7.050649e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,7.617747e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,5.237436e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,5.059035e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,5.437758e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,6.244732e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,6.00288e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,2.57383e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,1.509604e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,2.049566e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,1.139893e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,1.077352e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,1.168307e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,1.376809e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,1.683251e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,2.072024e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,2.543177e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,3.171081e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,4.244026e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,6.17083e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.111127e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.153934e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,9.565935e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,9.403481e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,9.732529e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.040234e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.007747e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,6.54744e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,1.509715e+07);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1.392964e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,1.991439e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,3917250);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,2719153);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,2530491);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,2581768);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,2608320);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,2809286);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,3353447);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,4268766);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,5600687);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,8859282);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,2.173703e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,2.399984e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,1.881205e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,1.936982e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,2.102104e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,2.390011e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,2.449015e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,1.773494e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,2393028);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,1198.93);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,531.0328);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,442.0097);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,424.6486);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,428.5758);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,431.1999);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,447.3682);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,485.5038);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,544.9101);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,629.1091);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,793.7712);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,1240.952);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,1304.053);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,1158.849);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,1183.912);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,1246.057);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,1333.886);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,1369.387);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,1181.832);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,434.2353);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(3.578258e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_16->Modified();
   CvB_jets_all_16->cd();
   CvB_jets_all_16->SetSelected(CvB_jets_all_16);
}
