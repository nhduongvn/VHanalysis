#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_all()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_all = new TCanvas("Aplanarity_tags_all", "Aplanarity_tags_all",0,0,600,600);
   Aplanarity_tags_all->SetHighLightColor(2);
   Aplanarity_tags_all->Range(-0.2183529,-4.635634,1.171633,33.99465);
   Aplanarity_tags_all->SetFillColor(0);
   Aplanarity_tags_all->SetFillStyle(4000);
   Aplanarity_tags_all->SetBorderMode(0);
   Aplanarity_tags_all->SetBorderSize(2);
   Aplanarity_tags_all->SetLeftMargin(0.15709);
   Aplanarity_tags_all->SetRightMargin(0.1234783);
   Aplanarity_tags_all->SetBottomMargin(0.12);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(30.13162);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0);
   st_stack_64->SetMaximum(30.13162);
   st_stack_64->SetDirectory(0);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->GetXaxis()->SetTitle("Aplanarity");
   st_stack_64->GetXaxis()->SetRange(1,50);
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetTitleOffset(1);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Events/0.02");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetTitleSize(0.037);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetTitleOffset(1);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,14.90326);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,10.59833);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,7.342531);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,5.071926);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,3.652407);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,2.613711);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,1.80469);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,1.415289);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,0.9669388);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,0.7077899);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,0.5104354);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(12,0.4104442);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(13,0.3104552);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(14,0.224573);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,0.1007011);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(16,0.0708814);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(17,0.03916556);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(18,0.02793127);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(19,0.01614777);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(20,0.01463072);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(21,0.005316553);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(22,0.003338416);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,0.200503);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,0.1678251);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,0.1365584);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,0.1130657);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,0.09735241);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,0.08154373);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,0.06751212);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,0.06253214);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,0.05005727);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,0.04186766);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,0.03553448);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(12,0.03197564);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(13,0.02862985);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(14,0.02439683);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,0.01508295);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(16,0.01386569);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(17,0.009408405);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(18,0.008055046);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(19,0.006398204);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(20,0.006122019);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(21,0.003771464);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(22,0.002411948);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(22839);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,5.184482);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,3.56908);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,2.315187);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,1.556812);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,1.038408);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,0.7385632);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,0.4984267);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,0.3580373);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,0.2324524);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,0.1531588);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,0.1191235);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,0.07004201);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,0.05207369);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,0.02511438);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(15,0.0213511);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(16,0.009791041);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,0.00552495);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(18,0.003009933);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(19,0.003744758);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(20,0.0008124419);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(21,0.0009943392);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,0.04352062);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,0.03691689);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,0.0277897);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,0.02262646);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,0.01879653);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,0.01545984);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,0.0127774);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,0.011947);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,0.008631932);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,0.007288214);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,0.007116416);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,0.005328765);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,0.004168479);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,0.002773581);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(15,0.002647045);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(16,0.001760267);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,0.001355061);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(18,0.0009596583);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(19,0.001127757);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(20,0.0005150179);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(21,0.0005583203);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(53399);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_1","ZHcc","F");

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
   Aplanarity_tags_all->Modified();
   Aplanarity_tags_all->cd();
   Aplanarity_tags_all->SetSelected(Aplanarity_tags_all);
}
