#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_all_logY()
{
//=========Macro generated from canvas: Sphericity_tags_all/Sphericity_tags_all
//=========  (Thu Mar  9 13:08:25 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_all = new TCanvas("Sphericity_tags_all", "Sphericity_tags_all",0,0,600,600);
   Sphericity_tags_all->SetHighLightColor(2);
   Sphericity_tags_all->Range(-0.2183529,-0.166313,1.171633,0.5265981);
   Sphericity_tags_all->SetFillColor(0);
   Sphericity_tags_all->SetFillStyle(4000);
   Sphericity_tags_all->SetBorderMode(0);
   Sphericity_tags_all->SetBorderSize(2);
   Sphericity_tags_all->SetLogy();
   Sphericity_tags_all->SetLeftMargin(0.15709);
   Sphericity_tags_all->SetRightMargin(0.1234783);
   Sphericity_tags_all->SetBottomMargin(0.12);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(2.643071);
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",25,0,1);
   st_stack_60->SetMinimum(0.8257267);
   st_stack_60->SetMaximum(2.866203);
   st_stack_60->SetDirectory(0);
   st_stack_60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_60->SetLineColor(ci);
   st_stack_60->GetXaxis()->SetTitle("Sphericity");
   st_stack_60->GetXaxis()->SetRange(1,25);
   st_stack_60->GetXaxis()->SetLabelFont(42);
   st_stack_60->GetXaxis()->SetTitleOffset(1);
   st_stack_60->GetXaxis()->SetTitleFont(42);
   st_stack_60->GetYaxis()->SetTitle("Event/0.04");
   st_stack_60->GetYaxis()->SetLabelFont(42);
   st_stack_60->GetYaxis()->SetTitleSize(0.037);
   st_stack_60->GetYaxis()->SetTitleFont(42);
   st_stack_60->GetZaxis()->SetLabelFont(42);
   st_stack_60->GetZaxis()->SetTitleOffset(1);
   st_stack_60->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_60);
   
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_1 = new TH1D("VbbHcc_tags_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(1,0.1973519);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(2,0.7217878);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(3,1.315871);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(4,1.576489);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(5,1.543601);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(6,1.510802);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(7,1.423425);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(8,1.247385);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(9,1.232266);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(10,1.160706);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(11,0.999911);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(12,0.8758103);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(13,0.8889817);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(14,0.7658128);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(15,0.7290281);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(16,0.5354688);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(17,0.3976466);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(18,0.2947786);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(19,0.2041752);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(20,0.1110851);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(21,0.03326961);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(22,0.01736344);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(24,0.002231337);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(1,0.02168117);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(2,0.04195612);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(3,0.05858708);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(4,0.07399977);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(5,0.06242707);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(6,0.06189751);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(7,0.06299599);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(8,0.06202265);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(9,0.05677799);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(10,0.05725017);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(11,0.0503545);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(12,0.04648672);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(13,0.04776029);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(14,0.04815466);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(15,0.04289437);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(16,0.0368704);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(17,0.03215469);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(18,0.02677538);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(19,0.02226482);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(20,0.01654564);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(21,0.008836334);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(22,0.006270023);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(24,0.002231337);
   VbbHcc_tags_Sphericity_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_2 = new TH1D("VbbHcc_tags_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(1,0.1013189);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(2,0.3576388);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(3,0.5372785);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(4,0.6172598);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(5,0.6039705);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(6,0.6107011);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(7,0.619462);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(8,0.6064397);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(9,0.5785701);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(10,0.5015189);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(11,0.4631546);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(12,0.4016893);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(13,0.3669424);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(14,0.3214169);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(15,0.2671407);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(16,0.2147293);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(17,0.1756918);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(18,0.1348484);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(19,0.06792331);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(20,0.03381065);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(21,0.0111181);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(22,0.001182439);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(23,0.001607136);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(1,0.005609797);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(2,0.01079903);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(3,0.01327746);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(4,0.01468365);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(5,0.01400582);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(6,0.01438918);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(7,0.01426465);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(8,0.01427927);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(9,0.01365182);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(10,0.01298228);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(11,0.01274801);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(12,0.01140933);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(13,0.01151466);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(14,0.01015253);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(15,0.009801252);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(16,0.008585621);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(17,0.007496701);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(18,0.008353391);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(19,0.004634866);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(20,0.003320539);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(21,0.001887956);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(22,0.0006087009);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(23,0.0008021071);
   VbbHcc_tags_Sphericity_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_all->Modified();
   Sphericity_tags_all->cd();
   Sphericity_tags_all->SetSelected(Sphericity_tags_all);
}
