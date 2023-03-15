#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(-1.353788,-3.268837,7.264125,0.5773165);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetLogy();
   H_dR_tags_all->SetLeftMargin(0.15709);
   H_dR_tags_all->SetRightMargin(0.1234783);
   H_dR_tags_all->SetBottomMargin(0.12);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(15.8472);
   st_stack_24->SetMaximum(1.558479);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_24->GetXaxis()->SetRange(1,31);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Event/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,0.3488207);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,0.7670021);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,1.01369);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,1.285343);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,1.205823);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,1.000884);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,0.8709916);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,0.6676336);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,0.6482176);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,0.6468031);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,0.6658931);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,0.8108706);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,0.8348515);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,0.8877352);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,0.3378836);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,0.1773205);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,0.1175945);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,0.06341755);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,0.03412615);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,0.03411048);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,0.02511499);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,0.008051701);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,0.008630687);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,0.002026387);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,0.02499025);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,0.03921914);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,0.04261843);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,0.05675332);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,0.04632898);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,0.04597535);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,0.03920509);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,0.03419207);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,0.0332464);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,0.03394592);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,0.03426262);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,0.03958524);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,0.03867846);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,0.0411884);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,0.02395647);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,0.01749232);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,0.01426203);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,0.01018059);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,0.007184308);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,0.007488926);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,0.006773296);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,0.003443915);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,0.003788877);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,0.002026387);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,0.1242219);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,0.2587532);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,0.4043946);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,0.5429772);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,0.5810851);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,0.5025339);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,0.3766803);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,0.3005093);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,0.2561355);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,0.272386);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,0.28263);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,0.3015466);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,0.3394799);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,0.3438164);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,0.16497);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,0.09837844);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,0.06425643);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,0.03781478);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,0.03113044);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,0.01479745);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,0.009027901);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,0.005122547);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,0.005621016);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,0.002694372);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,0.001140888);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,0.0003065698);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,0.005270991);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,0.007719707);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,0.009534267);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,0.0120967);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,0.01198403);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,0.01062955);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,0.009251269);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,0.008428432);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,0.007629104);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,0.007865524);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,0.007993425);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,0.00826371);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,0.008900928);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,0.00911414);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,0.006579476);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,0.005067382);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,0.003806306);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,0.002899902);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,0.002699902);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,0.001820165);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,0.001451104);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,0.001022061);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,0.001152167);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,0.0007971431);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,0.0005225181);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,0.0003065698);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","ZHcc","F");

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
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}
