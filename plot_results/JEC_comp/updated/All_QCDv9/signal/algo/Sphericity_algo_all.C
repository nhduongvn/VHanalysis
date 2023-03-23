#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_all()
{
//=========Macro generated from canvas: Sphericity_algo_all/Sphericity_algo_all
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_all = new TCanvas("Sphericity_algo_all", "Sphericity_algo_all",0,0,600,600);
   Sphericity_algo_all->SetHighLightColor(2);
   Sphericity_algo_all->Range(-0.2183529,-0.1137816,1.171633,0.8343985);
   Sphericity_algo_all->SetFillColor(0);
   Sphericity_algo_all->SetFillStyle(4000);
   Sphericity_algo_all->SetBorderMode(0);
   Sphericity_algo_all->SetBorderSize(2);
   Sphericity_algo_all->SetLeftMargin(0.15709);
   Sphericity_algo_all->SetRightMargin(0.1234783);
   Sphericity_algo_all->SetBottomMargin(0.12);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.7395805);
   
   TH1F *st_stack_156 = new TH1F("st_stack_156","",25,0,1);
   st_stack_156->SetMinimum(0);
   st_stack_156->SetMaximum(0.7395805);
   st_stack_156->SetDirectory(0);
   st_stack_156->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_156->SetLineColor(ci);
   st_stack_156->GetXaxis()->SetTitle("Sphericity");
   st_stack_156->GetXaxis()->SetRange(1,25);
   st_stack_156->GetXaxis()->SetLabelFont(42);
   st_stack_156->GetXaxis()->SetTitleOffset(1);
   st_stack_156->GetXaxis()->SetTitleFont(42);
   st_stack_156->GetYaxis()->SetTitle("Event/0.04");
   st_stack_156->GetYaxis()->SetLabelFont(42);
   st_stack_156->GetYaxis()->SetTitleSize(0.037);
   st_stack_156->GetYaxis()->SetTitleFont(42);
   st_stack_156->GetZaxis()->SetLabelFont(42);
   st_stack_156->GetZaxis()->SetTitleOffset(1);
   st_stack_156->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_156);
   
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_1 = new TH1D("VbbHcc_algo_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(1,0.04201468);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(2,0.2381851);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(3,0.3801583);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(4,0.4683392);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(5,0.3603687);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(6,0.1666329);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(7,0.05568449);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(8,0.006204645);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(9,0.006224065);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(10,0.01178251);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(11,0.01327626);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(12,0.00194175);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(14,0.00773578);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(1,0.01003612);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(2,0.02391084);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(3,0.03172669);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(4,0.03473273);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(5,0.04887103);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(6,0.02012704);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(7,0.01164544);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(8,0.003933166);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(9,0.003605481);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(10,0.005334362);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(11,0.006004574);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(12,0.00194175);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(14,0.004559794);
   VbbHcc_algo_Sphericity_all_stack_1->SetEntries(781);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_2 = new TH1D("VbbHcc_algo_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(1,0.01893223);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(2,0.09187672);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(3,0.1395799);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(4,0.1455126);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(5,0.1007191);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(6,0.04953724);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(7,0.01888921);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(8,0.011516);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(9,0.005377051);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(10,0.004028641);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(11,0.001841971);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(12,0.002451244);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(13,0.001866694);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(14,0.0009457449);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(15,0.001820251);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(16,0.0004937005);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(17,0.0002638218);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(18,0.000634686);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(19,0.0002588532);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(1,0.002455303);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(2,0.005410608);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(3,0.006629879);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(4,0.006913512);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(5,0.00648569);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(6,0.003986797);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(7,0.002458162);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(8,0.001909312);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(9,0.001270626);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(10,0.001138503);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(11,0.0007298679);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(12,0.0009484482);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(13,0.0008045304);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(14,0.0004980344);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(15,0.0007243205);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(16,0.0003699457);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(17,0.0002638218);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(18,0.0004553027);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(19,0.0002588532);
   VbbHcc_algo_Sphericity_all_stack_2->SetEntries(2012);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_all->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->SetSelected(Sphericity_algo_all);
}
