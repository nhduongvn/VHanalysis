#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_all()
{
//=========Macro generated from canvas: Z_pt_both_all/Z_pt_both_all
//=========  (Wed Jan 18 11:40:24 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_both_all = new TCanvas("Z_pt_both_all", "Z_pt_both_all",0,0,600,600);
   Z_pt_both_all->SetHighLightColor(2);
   Z_pt_both_all->Range(37.97653,-2.789834,1705.96,20.45879);
   Z_pt_both_all->SetFillColor(0);
   Z_pt_both_all->SetFillStyle(4000);
   Z_pt_both_all->SetBorderMode(0);
   Z_pt_both_all->SetBorderSize(2);
   Z_pt_both_all->SetLeftMargin(0.15709);
   Z_pt_both_all->SetRightMargin(0.1234783);
   Z_pt_both_all->SetBottomMargin(0.12);
   Z_pt_both_all->SetFrameFillStyle(1000);
   Z_pt_both_all->SetFrameBorderMode(0);
   Z_pt_both_all->SetFrameFillStyle(1000);
   Z_pt_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(18.13392);
   
   TH1F *st_stack_140 = new TH1F("st_stack_140","",40,0,2000);
   st_stack_140->SetMinimum(0);
   st_stack_140->SetMaximum(18.13392);
   st_stack_140->SetDirectory(0);
   st_stack_140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_140->SetLineColor(ci);
   st_stack_140->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_140->GetXaxis()->SetRange(7,30);
   st_stack_140->GetXaxis()->SetLabelFont(42);
   st_stack_140->GetXaxis()->SetTitleOffset(1);
   st_stack_140->GetXaxis()->SetTitleFont(42);
   st_stack_140->GetYaxis()->SetTitle("Events/50.0");
   st_stack_140->GetYaxis()->SetLabelFont(42);
   st_stack_140->GetYaxis()->SetTitleSize(0.037);
   st_stack_140->GetYaxis()->SetTitleFont(42);
   st_stack_140->GetZaxis()->SetLabelFont(42);
   st_stack_140->GetZaxis()->SetTitleOffset(1);
   st_stack_140->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_140);
   
   
   TH1D *VbbHcc_both_Z_pt_all_stack_1 = new TH1D("VbbHcc_both_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(1,6.805448);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(2,12.08928);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(3,7.536442);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(4,3.479425);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(5,1.707858);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(6,0.8856042);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(7,0.4580233);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(8,0.2903635);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(9,0.1570381);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(10,0.06027051);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(11,0.04721248);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(12,0.01591645);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(13,0.01866258);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(14,0.009607939);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(16,0.004534443);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(17,0.001546166);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(18,0.004418348);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(21,0.002353708);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(24,0.002551435);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(1,0.1206276);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(2,0.160768);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(3,0.1267503);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(4,0.08733822);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(5,0.05980664);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(6,0.04323697);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(7,0.03118615);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(8,0.02466597);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(9,0.01846398);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(10,0.01108357);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(11,0.009738215);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(12,0.005350794);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(13,0.006263558);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(14,0.004089815);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(16,0.003378575);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(17,0.001545188);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(18,0.002565924);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(21,0.002353708);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(24,0.002551435);
   VbbHcc_both_Z_pt_all_stack_1->SetEntries(19568);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_all_stack_2 = new TH1D("VbbHcc_both_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(1,1.081624);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(2,2.740309);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(3,3.043493);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(4,1.913348);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(5,0.9403548);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(6,0.4908859);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(7,0.2617723);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(8,0.1499185);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(9,0.07787675);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(10,0.04407243);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(11,0.0285574);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(12,0.0210144);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(13,0.01482199);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(14,0.0102434);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(15,0.00446691);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(16,0.003443523);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(17,0.00385707);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(18,0.003973999);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(19,0.003451459);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(20,0.0005374697);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(21,0.001327758);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(22,0.0002012167);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(23,0.0008751304);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(24,0.000206937);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(25,0.001124796);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(26,0.0002197336);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(27,0.0001275402);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(29,0.0004949126);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(33,0.0005555899);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(35,0.0001892237);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(1,0.01768192);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(2,0.02830298);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(3,0.03002447);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(4,0.02350798);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(5,0.01651396);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(6,0.01184522);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(7,0.008669698);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(8,0.006678403);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(9,0.004788564);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(10,0.003574869);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(11,0.00286697);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(12,0.002529369);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(13,0.002098831);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(14,0.001721829);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(15,0.0009737472);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(16,0.001006328);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(17,0.0009659249);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(18,0.001054914);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(19,0.001003513);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(20,0.000310582);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(21,0.000729167);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(22,0.0002012167);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(23,0.0003995351);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(24,0.0001878671);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(25,0.0005180282);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(26,0.000164479);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(27,0.0001275402);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(29,0.0004949126);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(33,0.0004107145);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(35,0.0001892237);
   VbbHcc_both_Z_pt_all_stack_2->SetEntries(45428);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_all->Modified();
   Z_pt_both_all->cd();
   Z_pt_both_all->SetSelected(Z_pt_both_all);
}
