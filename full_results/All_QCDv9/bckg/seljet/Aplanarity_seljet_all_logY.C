#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_all_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_all/Aplanarity_seljet_all
//=========  (Thu Feb 16 10:37:43 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_all = new TCanvas("Aplanarity_seljet_all", "Aplanarity_seljet_all",0,0,600,600);
   Aplanarity_seljet_all->SetHighLightColor(2);
   Aplanarity_seljet_all->Range(-0.2183529,-1.636183,1.171633,13.66058);
   Aplanarity_seljet_all->SetFillColor(0);
   Aplanarity_seljet_all->SetFillStyle(4000);
   Aplanarity_seljet_all->SetBorderMode(0);
   Aplanarity_seljet_all->SetBorderSize(2);
   Aplanarity_seljet_all->SetLogy();
   Aplanarity_seljet_all->SetLeftMargin(0.15709);
   Aplanarity_seljet_all->SetRightMargin(0.1234783);
   Aplanarity_seljet_all->SetBottomMargin(0.12);
   Aplanarity_seljet_all->SetFrameFillStyle(1000);
   Aplanarity_seljet_all->SetFrameBorderMode(0);
   Aplanarity_seljet_all->SetFrameFillStyle(1000);
   Aplanarity_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(4.322688e+11);
   
   TH1F *st_stack_320 = new TH1F("st_stack_320","",50,0,1);
   st_stack_320->SetMinimum(1.58281);
   st_stack_320->SetMaximum(1.35177e+12);
   st_stack_320->SetDirectory(0);
   st_stack_320->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_320->SetLineColor(ci);
   st_stack_320->GetXaxis()->SetTitle("Aplanarity");
   st_stack_320->GetXaxis()->SetRange(1,50);
   st_stack_320->GetXaxis()->SetLabelFont(42);
   st_stack_320->GetXaxis()->SetTitleOffset(1);
   st_stack_320->GetXaxis()->SetTitleFont(42);
   st_stack_320->GetYaxis()->SetTitle("Events/0.02");
   st_stack_320->GetYaxis()->SetLabelFont(42);
   st_stack_320->GetYaxis()->SetTitleSize(0.037);
   st_stack_320->GetYaxis()->SetTitleFont(42);
   st_stack_320->GetZaxis()->SetLabelFont(42);
   st_stack_320->GetZaxis()->SetTitleOffset(1);
   st_stack_320->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_320);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_all_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(0,474.2751);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(1,4.311895e+09);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(2,2.184133e+09);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(3,1.161089e+09);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(4,6.635307e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(5,3.989124e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(6,2.530178e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(7,1.637389e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(8,1.082233e+08);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(9,7.237789e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(10,4.887429e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(11,3.304958e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(12,2.207446e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(13,1.468543e+07);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(14,9659114);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(15,5921830);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(16,3963086);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(17,2407935);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(18,1348151);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(19,650592.3);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(20,324618.6);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(21,143180.5);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(22,41440.8);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(23,12749.41);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(24,2542.526);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(25,35.44002);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(0,354.9132);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(1,2919975);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(2,2211304);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(3,1639998);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(4,1244669);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(5,940843.8);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(6,765590.4);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(7,619040.2);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(8,482679.6);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(9,428745.9);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(10,341066.1);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(11,282727.3);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(12,233802.9);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(13,188701);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(14,164786.7);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(15,112970.5);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(16,106297.2);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(17,94509.4);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(18,53516.59);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(19,34089.2);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(20,17771.93);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(21,11360.87);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(22,5326.562);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(23,3367.822);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(24,2006.552);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(25,35.44002);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetEntries(1.25316e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_all_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(0,2.023126);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(1,1.079266e+07);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(2,8459236);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(3,5738816);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(4,3918683);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(5,2732818);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(6,1938488);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(7,1390670);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(8,1003369);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(9,725098.3);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(10,522115.4);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(11,373506.3);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(12,264245.3);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(13,184256.3);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(14,126108.5);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(15,84215.77);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(16,54550.2);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(17,33982.76);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(18,20089.51);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(19,11154.75);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(20,5667.025);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(21,2509.309);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(22,925.3089);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(23,247.0377);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(24,39.62301);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(25,1.121959);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(0,0.3887318);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(1,938.284);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(2,833.6782);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(3,687.3253);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(4,568.5041);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(5,475.1692);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(6,400.2408);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(7,339.2064);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(8,287.8139);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(9,245.3682);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(10,207.6194);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(11,176.0363);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(12,148.9224);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(13,123.487);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(14,102.6059);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(15,83.60866);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(16,67.34304);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(17,52.93254);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(18,40.85957);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(19,30.45205);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(20,21.75733);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(21,14.28409);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(22,8.669953);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(23,5.546038);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(24,1.78133);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(25,0.2893249);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetEntries(5.413184e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_seljet_all->Modified();
   Aplanarity_seljet_all->cd();
   Aplanarity_seljet_all->SetSelected(Aplanarity_seljet_all);
}
