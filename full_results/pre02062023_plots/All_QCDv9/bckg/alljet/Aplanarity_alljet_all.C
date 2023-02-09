#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_all()
{
//=========Macro generated from canvas: Aplanarity_alljet_all/Aplanarity_alljet_all
//=========  (Wed Jan 18 11:43:14 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_all = new TCanvas("Aplanarity_alljet_all", "Aplanarity_alljet_all",0,0,600,600);
   Aplanarity_alljet_all->SetHighLightColor(2);
   Aplanarity_alljet_all->Range(-0.2183529,-6.716804e+11,1.171633,4.925656e+12);
   Aplanarity_alljet_all->SetFillColor(0);
   Aplanarity_alljet_all->SetFillStyle(4000);
   Aplanarity_alljet_all->SetBorderMode(0);
   Aplanarity_alljet_all->SetBorderSize(2);
   Aplanarity_alljet_all->SetLeftMargin(0.15709);
   Aplanarity_alljet_all->SetRightMargin(0.1234783);
   Aplanarity_alljet_all->SetBottomMargin(0.12);
   Aplanarity_alljet_all->SetFrameFillStyle(1000);
   Aplanarity_alljet_all->SetFrameBorderMode(0);
   Aplanarity_alljet_all->SetFrameFillStyle(1000);
   Aplanarity_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.365923e+12);
   
   TH1F *st_stack_256 = new TH1F("st_stack_256","",50,0,1);
   st_stack_256->SetMinimum(0);
   st_stack_256->SetMaximum(4.365923e+12);
   st_stack_256->SetDirectory(0);
   st_stack_256->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_256->SetLineColor(ci);
   st_stack_256->GetXaxis()->SetTitle("Aplanarity");
   st_stack_256->GetXaxis()->SetRange(1,50);
   st_stack_256->GetXaxis()->SetLabelFont(42);
   st_stack_256->GetXaxis()->SetTitleOffset(1);
   st_stack_256->GetXaxis()->SetTitleFont(42);
   st_stack_256->GetYaxis()->SetTitle("Events/0.02");
   st_stack_256->GetYaxis()->SetLabelFont(42);
   st_stack_256->GetYaxis()->SetTitleSize(0.037);
   st_stack_256->GetYaxis()->SetTitleFont(42);
   st_stack_256->GetZaxis()->SetLabelFont(42);
   st_stack_256->GetZaxis()->SetTitleOffset(1);
   st_stack_256->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_256);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_all_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(0,85561);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(1,2.910562e+12);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(2,2.27308e+11);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(3,8.323213e+10);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(4,4.042816e+10);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(5,2.24177e+10);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(6,1.33514e+10);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(7,8.386067e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(8,5.369073e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(9,3.49798e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(10,2.321607e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(11,1.530314e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(12,1.016205e+09);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(13,6.632063e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(14,4.32426e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(15,2.734076e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(16,1.690219e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(17,1.012462e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(18,5.704921e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(19,3.170263e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(20,1.596976e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(21,6670520);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(22,2339658);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(23,681918.2);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(24,167889.7);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinContent(25,39.05318);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(0,32687.1);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(1,2.418912e+08);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(2,6.757369e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(3,4.085921e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(4,2.853635e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(5,2.127696e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(6,1.630771e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(7,1.31183e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(8,1.057996e+07);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(9,8283731);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(10,6736805);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(11,5551707);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(12,4689084);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(13,3622927);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(14,3081539);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(15,2321338);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(16,1805799);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(17,1389100);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(18,1050011);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(19,827411);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(20,610850);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(21,359131);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(22,224541.4);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(23,112149.7);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(24,61945.9);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetBinError(25,39.05318);
   VbbHcc_alljet_Aplanarity_all_stack_1->SetEntries(7.026102e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_all_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(0,5.582385);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(1,5.33863e+07);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(2,2.245937e+07);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(3,1.335926e+07);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(4,8774087);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(5,6045376);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(6,4274924);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(7,3067543);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(8,2215280);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(9,1602962);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(10,1156125);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(11,828035);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(12,586723.3);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(13,409625.4);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(14,280762.7);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(15,187253.9);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(16,121375);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(17,75605.44);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(18,44591.76);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(19,24714.8);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(20,12432.58);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(21,5531.067);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(22,2039.953);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(23,546.2125);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(24,84.39619);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinContent(25,2.662969);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(0,0.6366841);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(1,2033.646);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(2,1335.943);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(3,1033.265);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(4,839.3245);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(5,697.3978);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(6,587.322);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(7,497.6033);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(8,422.935);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(9,360.1592);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(10,305.7363);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(11,258.6491);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(12,218.6777);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(13,182.1721);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(14,150.7317);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(15,123.5923);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(16,99.18448);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(17,78.26189);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(18,60.20901);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(19,44.97858);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(20,31.74482);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(21,20.88132);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(22,12.69533);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(23,6.594303);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(24,2.519852);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetBinError(25,0.4384375);
   VbbHcc_alljet_Aplanarity_all_stack_2->SetEntries(1.8221e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_all_stack_1","QCD","F");

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
   Aplanarity_alljet_all->Modified();
   Aplanarity_alljet_all->cd();
   Aplanarity_alljet_all->SetSelected(Aplanarity_alljet_all);
}
